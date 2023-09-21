#include <iostream>

bool CheckGameState(char (&gameField)[3][3]) {
    for (int i = 0; i < 3; ++i) {
        if (gameField[i][0] == 'O' && gameField[i][1] == 'O' && gameField[i][2] == 'O') {
            return false;
        }
    }
    for (int j = 0; j < 3; ++j) {
        if (gameField[0][j] == 'O' && gameField[1][j] == 'O' && gameField[2][j] == 'O') {
            return false;
        }
    }

    if (gameField[0][0] == 'O' && gameField[1][1] == 'O' && gameField[2][2] == 'O' ||
        gameField[0][2] == 'O' && gameField[1][1] == 'O' && gameField[2][0] == 'O') {
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
        return false;
    }
}
