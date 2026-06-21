# Projekt: Program do kopiowania plików (C)

Prosty i wydajny program konsolowy napisany w języku C, służący do bezpiecznego kopiowania plików. Projekt został podzielony w sposób strukturalny na pliki źródłowe (`.c`) oraz nagłówkowe (`.h`), co ułatwia zarządzanie kodem i ewentualną rozbudowę.

## 🚀 Funkcje programu
- **Uniwersalność:** Dzięki zastosowaniu trybu binarnego (`rb`/`wb`), program bez problemu kopiuje każdy rodzaj plików: tekstowe, obrazy, pliki PDF, archiwa czy pliki wykonywalne.
- **Wydajność pamięciowa:** Kopiowanie odbywa się blokowo za pomocą bufora o rozmiarze 4 KB. Oznacza to, że program nie ładuje całego pliku do pamięci RAM, co pozwala na bezpieczne kopiowanie nawet bardzo dużych plików bez ryzyka zawieszenia komputera.
- **Obsługa błędów:** Program informuje użytkownika, jeśli plik źródłowy nie istnieje lub brakuje uprawnień do zapisu pliku docelowego.

## 📁 Struktura projektu
- `main.c` – Główny punkt wejścia programu. Odpowiada za komunikację z użytkownikiem (pobranie ścieżek do plików) oraz wyświetlanie statusu operacji.
- `copier.c` – Logika biznesowa programu. Zawiera implementację właściwej funkcji kopiującej dane strumieniem binarnym.
- `copier.h` – Plik nagłówkowy zawierający deklarację funkcji `copy_file` oraz opis kodów błędów.

## 🛠️ Kompilacja i uruchomienie

Do skompilowania projektu wymagany jest kompilator języka C (np. `gcc` lub `clang`).

### 1. Kompilacja za pomocą GCC
Otwórz terminal w folderze z projektem i wykonaj następujące polecenie:

```bash
gcc main.c copier.c -o program_kopiujacy