#include <iostream>
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
