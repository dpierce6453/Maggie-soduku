/*
 * UsefulFunctions.cpp
 *
 *  Created on: Jul 26, 2017
 *      Author: dan
 */

#include "UsefulFunctions.h"

bool checkSodukuPuzzle(sodpuzzle *pPuzzle)
{
	return true;
	// go through each column and check if correct
	// getArray(BOX, 0)
	// ch
	// go through each row and check if correct
	// go through each box and check if correct
}

int anAnswerVector[9];

int * getSodukuVector(enum elements_t enRowColBox, int nWhich, sodpuzzle *pPuzzle)
{
	int i;

	switch (enRowColBox)
	{
		case ROW:
			for(i=0; i<9; i++)
			{
				anAnswerVector[i] = (*pPuzzle)[nWhich][i];
			}
			break;
		case COL:
			break;
		case BOX:
			break;

	}
	return &anAnswerVector[0];
}


// This function will check any 9 element int array to make sure that none of the
// elements are the same which is a requirement of a Soduku Puzzle.
bool checkSodukuArray(int *pArray)
{
	// Check the array to see if any values repeat.
	int i, j, nNumberOfOccurrences;
	for(i=1; i < 10; i++)
	{
		nNumberOfOccurrences = 0;
		for(j=0; j < 9; j++)
		{
			if (pArray[j] == i)
			{
				nNumberOfOccurrences++;
				if(nNumberOfOccurrences > 1) return false;
			}
		}
		if (nNumberOfOccurrences != 1) return false;
	}
	return true;

}


