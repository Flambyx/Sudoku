#include "Sudoku.h"
#include <iostream>

int main() {
    Sudoku test;
    short int Sudoku1[9][9] = {{0,0,4,0,3,0,0,0,9},
                               {0,7,0,1,6,8,2,0,4},
                               {0,5,6,2,4,0,0,7,0},
                               {6,0,7,0,0,5,4,0,0},
                               {0,0,5,0,9,4,0,8,0},
                               {0,0,0,0,7,0,0,2,0},
                               {3,0,0,0,0,0,0,0,5},
                               {0,0,0,4,8,0,0,0,0},
                               {0,0,2,9,5,0,8,6,0}};
    for (int i = 0;i<9;i++){
        for (int j = 0 ; j<9;j++){
            test.grille[i][j]=Sudoku1[i][j];
        }
    }
    test.getLigne(3);

    return 0;
}