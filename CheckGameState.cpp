#include <iostream>

char CheckGameState(char (&gameField)[3][3]) {
    for (int i = 0; i < 3; ++i) {
        if (gameField[i][0] == 'O' && gameField[i][1] == 'O' && gameField[i][2] == 'O' ||
            gameField[i][0] == 'X' && gameField[i][1] == 'X' && gameField[i][2] == 'X') {
            return '0';
        }
    }
    for (int j = 0; j < 3; ++j) {
        if (gameField[0][j] == 'O' && gameField[1][j] == 'O' && gameField[2][j] == 'O' ||
            gameField[0][j] == 'X' && gameField[1][j] == 'X' && gameField[2][j] == 'X') {
            return '0';
        }
    }

    if (gameField[0][0] == 'O' && gameField[1][1] == 'O' && gameField[2][2] == 'O' ||
        gameField[0][0] == 'X' && gameField[1][1] == 'X' && gameField[2][2] == 'X' ||
        gameField[0][2] == 'O' && gameField[1][1] == 'O' && gameField[2][0] == 'O' ||
        gameField[0][2] == 'X' && gameField[1][1] == 'X' && gameField[2][0] == 'X') {
        return '0';
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
        return '1';
    } else {
        return '0';
    }
}

int main() {

}
