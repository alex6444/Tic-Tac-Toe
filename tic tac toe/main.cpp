//lets make tic tac toe
#include <iostream>

char myGridAray[3][6] = {
    { '_', '|', '_', '|', '_', '\n' },
{ '_', '|', '_', '|', '_', '\n' },
{ ' ', '|', ' ', '|', ' ', '\n' }
};
int userGuessForX;
int userGuessForO;


void printArray() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 6; j++) {
            std::cout << myGridAray[i][j];
        }
}

void printUsersGuessForXOnBoard() {

 /*   if ((myGridAray[0][0] == 'X') && (myGridAray[0][1] == 'X') && (myGridAray[0][2] == 'X'))
    {
        std::cout << "You Win";
    }*/
    
        switch (userGuessForX) {
        case 1:
            myGridAray[2][0] = 'X';
            std::cout << "\n";
            printArray();
            std::cout << "\n";
            break;
        case 2:
            myGridAray[2][2] = 'X';
            std::cout << "\n";
            printArray();
            std::cout << "\n";
            break;
        case 3:
            myGridAray[2][4] = 'X';
            std::cout << "\n";
            printArray();
            std::cout << "\n";
            break;
        case 4:
            myGridAray[1][0] = 'X';
            std::cout << "\n";
            printArray();
            std::cout << "\n";
            break;
        case 5:
            myGridAray[1][2] = 'X';
            std::cout << "\n";
            printArray();
            std::cout << "\n";
            break;
        case 6:
            myGridAray[1][4] = 'X';
            std::cout << "\n";
            printArray();
            std::cout << "\n";
            break;
        case 7:
            myGridAray[0][0] = 'X';
            std::cout << "\n";
            printArray();
            std::cout << "\n";
            break;
        case 8:
            myGridAray[0][2] = 'X';
            std::cout << "\n";
            printArray();
            std::cout << "\n";
            break;
        case 9:
            myGridAray[0][4] = 'X';
            std::cout << "\n";
            printArray();
            std::cout << "\n";
        default:
            break;
        }
    
}


void printUsersGuessForOOnBoard() {
    switch (userGuessForO) {
    case 1:
        myGridAray[2][0] = 'O';
        std::cout << "\n";
        printArray();
        std::cout << "\n";
        break;
    case 2:
        myGridAray[2][2] = 'O';
        std::cout << "\n";
        printArray();
        std::cout << "\n";
        break;
    case 3:
        myGridAray[2][4] = 'O';
        std::cout << "\n";
        printArray();
        std::cout << "\n";
        break;
    case 4:
        myGridAray[1][0] = 'O';
        std::cout << "\n";
        printArray();
        std::cout << "\n";
        break;
    case 5:
        myGridAray[1][2] = 'O';
        std::cout << "\n";
        printArray();
        std::cout << "\n";
        break;
    case 6:
        myGridAray[1][4] = 'O';
        std::cout << "\n";
        printArray();
        std::cout << "\n";
        break;
    case 7:
        myGridAray[0][0] = 'O';
        std::cout << "\n";
        printArray();
        std::cout << "\n";
        break;
    case 8:
        myGridAray[0][2] = 'O';
        std::cout << "\n";
        printArray();
        std::cout << "\n";
        break;
    case 9:
        myGridAray[0][4] = 'O';
        std::cout << "\n";
        printArray();
        std::cout << "\n";
    default:
        break;
    }
}

void xTurn() {
    for (int i = 0; i < 4; i++) {
        std::cout << "Player X's go now" << std::endl;
        std::cin >> userGuessForX;

        printUsersGuessForXOnBoard();

        std::cout << "Player O's go now" << std::endl;
        std::cin >> userGuessForO;

        printUsersGuessForOOnBoard();
    }
}


int main() {

    //lets make a simple grid now that's 3x3 

    //std::cout << "_|_|_ \n";
    //std::cout << "_|_|_ \n";
    //std::cout << " | | \n";

    //now lets make an array that prints out a grid like this one 

    printArray();

    //ok now lets make a number pad based array for the user to see where they need to put the x or o 

    char myNumberPadArray[3][6] = {
        { '7', '|', '8', '|', '9', '\n' },
    { '4', '|', '5', '|', '6', '\n' },
    { '1', '|', '2', '|', '3', '\n' }
    };

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 6; j++) {
            std::cout << myNumberPadArray[i][j];
        }

    //now to make it so that when the user picks a number it replaces it with an x
    //std::cout << "\nPlease pick a number based on the numbers for postion to place an X" << std::endl;
    //std::cin >> userGuess; 

    //printUsersGuessForXOnBoard();

    //std::cout << "\nNext player pick a number based on the numers for the postion to place an O" << std::endl;
    //std::cin >> userGuess; 

    //printUsersGuessForOOnBoard();

    xTurn();


    std::cout << "Player X's go now" << std::endl;
    std::cin >> userGuessForO;

    printUsersGuessForXOnBoard();


    //now we want to make it so that when o or x is a three in a row it's a win for who ever has he x or o 
    /*char myNumberPadArray[3][6] = {
    { '7', '|', '8', '|', '9', '\n' },
    { '4', '|', '5', '|', '6', '\n' },
    { '1', '|', '2', '|', '3', '\n' }
    };*/




    system("pause");

    return 0;

}