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
typedef int sodarray[9];

bool checkSodukuArray(sodarray *paArray);
sodarray * getSodukuVector(enum elements_t enRowColBox, unsigned int nWhich, sodpuzzle *pPuzzle);



#endif /* USEFULFUNCTIONS_H_ */
