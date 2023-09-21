#include <iostream>
char PrintGameField(char (&gameField)[3][3]) {
    for (int i = 0; i < 27; i++) {
        std::cout << "\n";
    }
    for (int i = 0; i < 3; i++) {
        std::cout << " ___";
    }
    std::cout << " " << "\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "| " << gameField[0][i] << " ";
    }
    std::cout << "|" << "\n";
    for (int i = 0; i < 3; i++) {
        std::cout << " ___";
    }
    std::cout << " " << "\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "| " << gameField[1][i] << " ";
    }
    std::cout << "|" << "\n";
    for (int i = 0; i < 3; i++) {
        std::cout << " ___";
    }
    std::cout << " " << "\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "| " << gameField[2][i] << " ";
    }
    std::cout << "|" << "\n";
    for (int i = 0; i < 3; i++) {
        std::cout << " ___";
    }
    std::cout << " ";
}
