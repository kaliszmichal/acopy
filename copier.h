#ifndef COPIER_H
#define COPIER_H

// Funkcja zwraca 0 w przypadku sukcesu lub kod błędu (np. -1, -2) w przypadku porażki.
int copy_file(const char *source_path, const char *dest_path);

#endif // COPIER_H