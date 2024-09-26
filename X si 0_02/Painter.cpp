#include "Painter.hpp"

void Painter::Draw() {

    char message[] = "Apasati orice tasta pentru a incepe jocul...\n";

    for (int i = 0; message[i] != '\0'; ++i) {
        putchar(message[i]);
    }
}