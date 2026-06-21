#include <stdio.h>
#include "copier.h"

int main() {
    char source[256];
    char dest[256];

    printf("--- PROGRAM DO KOPIOWANIA PLIKÓW ---\n");
    
    printf("Podaj ścieżkę pliku źródłowego: ");
    scanf("%255s", source);

    printf("Podaj ścieżkę pliku docelowego: ");
    scanf("%255s", dest);

    printf("Kopiowanie pliku... proszę czekać.\n");
    
    int result = copy_file(source, dest);

    if (result == 0) {
        printf("Sukces! Plik został skopiowany pomyślnie.\n");
    } else {
        printf("Kopiowanie nie powiodło się (Kod błędu: %d).\n", result);
    }

    return 0;
}