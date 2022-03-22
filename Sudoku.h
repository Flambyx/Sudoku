//
// Created by florian on 22/03/2022.
//

#ifndef SUDOKU_SUDOKU_H
#define SUDOKU_SUDOKU_H


class Sudoku {
public : short int grille[9][9];
    short int* getLigne(int);
    short int* getColonne(int n);
    short int* getSousCarre(int n);
};


#endif //SUDOKU_SUDOKU_H
