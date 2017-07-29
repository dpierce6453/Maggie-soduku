/*
 * UsefulFunctions.cpp
 *
 *  Created on: Jul 26, 2017
 *      Author: dan
 */


bool checkSodukuPuzzle(int *pPuzzle)
{
	// go through each column and check if correct
	// getArray(BOX, 0)
	// ch
	// go through each row and check if correct
	// go through each box and check if correct
}

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


