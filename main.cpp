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

void PlayerTurn(char (&gameField)[3][3]){
    std::cout << "Now it's your turn!\n";
    std::cout << "Write coordinates x y, from 1 to 3, separated by space.\n";
    int x, y;
    std::cin >> x >> y;
    while (gameField[x - 1][y - 1] != '_'){
        std:: cout << "Wrong coordinates, try again!\n";
        std:: cin >> x >> y;
    }
    gameField[x - 1][y - 1] = 'X';
}

bool CheckGameState(char (&gameField)[3][3]) {
    for (int i = 0; i < 3; ++i) {
        if (gameField[i][0] == 'O' && gameField[i][1] == 'O' && gameField[i][2] == 'O') {
            std:: cout << "bro u trash. Delete internet and do not enter it anymore!";
            return false;
        }
    }
    for (int j = 0; j < 3; ++j) {
        if (gameField[0][j] == 'O' && gameField[1][j] == 'O' && gameField[2][j] == 'O') {
            std:: cout << "bro u trash. Delete internet and do not enter it anymore!";
            return false;
        }
    }

    if (gameField[0][0] == 'O' && gameField[1][1] == 'O' && gameField[2][2] == 'O' ||
        gameField[0][2] == 'O' && gameField[1][1] == 'O' && gameField[2][0] == 'O') {
        std:: cout << "bro u trash. Delete internet and do not enter it anymore!";
        return false;
    }

    int check = 0;
    for (int i; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (gameField[i][j] == '_') {
                check++;
            }
        }
    }

    if (check > 0) {
        return true;
    } else {
        std:: cout << "I tricked you. Nobody won. Ha-ha-ha!";
        return false;
    }
}

int main() {
    char gameField[3][3] {{'_', '_', '_'},
                          {'_', '_', '_'},
                          {'_', '_', '_'},
                          };
    while (CheckGameState(gameField)) {
        PlayerTurn(gameField);
        if (CheckGameState((gameField))) {
            AITurn(gameField);
        }
        PrintGameField(gameField);
    }
}
