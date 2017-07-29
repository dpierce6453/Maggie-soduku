/*
 * UsefulFunctions.h
 *
 *  Created on: Jul 26, 2017
 *      Author: dan
 */

#ifndef USEFULFUNCTIONS_H_
#define USEFULFUNCTIONS_H_



enum elements_t {ROW, COL, BOX};

typedef int sodpuzzle[9][9];

bool checkSodukuArray(int *pArray);
int * getSodukuVector(enum elements_t enRowColBox, int nWhich, sodpuzzle *pPuzzle);



#endif /* USEFULFUNCTIONS_H_ */
