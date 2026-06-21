#include <stdio.h>
#include <stdlib.h>
#include "copier.h"

#define BUFFER_SIZE 4096 // Rozmiar bufora (4 KB) – optymalny dla operacji na dysku

int copy_file(const char *source_path, const char *dest_path) {
    FILE *source = fopen(source_path, "rb"); // Tryb "rb" - odczyt binarny
    if (source == NULL) {
        perror("Błąd podczas otwierania pliku źródłowego");
        return -1;
    }

    FILE *dest = fopen(dest_path, "wb"); // Tryb "wb" - zapis binarny
    if (dest == NULL) {
        perror("Błąd podczas tworzenia pliku docelowego");
        fclose(source);
        return -2;
    }

    char buffer[BUFFER_SIZE];
    size_t bytes_read;

    // Kopiowanie w pętli przy użyciu bufora
    while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, source)) > 0) {
        size_t bytes_written = fwrite(buffer, 1, bytes_read, dest);
        if (bytes_written < bytes_read) {
            perror("Błąd podczas zapisu do pliku docelowego");
            fclose(source);
            fclose(dest);
            return -3;
        }
    }

    // Zamknięcie plików
    fclose(source);
    fclose(dest);
    return 0;
}