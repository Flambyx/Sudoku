#include "Sudoku.h"
#include <iostream>

short int* Sudoku:: getLigne(int n){
    short int* ligne = this->grille[n];
    for (int i = 0 ; i<9 ; i++){
        std::cout << *(ligne+1);
    }
    return ligne;
}

short int* Sudoku::getColonne(int n) {
    short int* ligne = this->grille[n];
    return ligne;
}