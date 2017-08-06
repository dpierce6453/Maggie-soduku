/*
 * SodukuTests.cpp
 *
 *  Created on: Jul 23, 2017
 *      Author: dan
 */

#include <CppUTest/TestHarness.h>
#include "UsefulFunctions.h"


bool checkVector(sodarray *a, sodarray *b);


TEST_GROUP(SodukuTests)
{
};


TEST(SodukuTests, FirstTest)
{
	CHECK_TRUE(1 == 1);
}

TEST(SodukuTests, checkArrayTest)
{
	sodarray A[9] = {1,2,3,4,5,6,1,8,9};
	sodarray B[9] = {1,2,3,4,5,6,7,8,9};
	sodarray C[9] = {2,2,2,2,2,2,2,2,2};

	CHECK_FALSE( checkSodukuArray(A) );
	CHECK_TRUE( checkSodukuArray(B) );
	CHECK_FALSE( checkSodukuArray(C) );

}
TEST(SodukuTests, checkgetSodukuRowVector)
{
	sodpuzzle A = 	{{1,2,3,4,5,6,7,8,9},
					 {2,3,4,5,6,7,8,9,1},
					 {3,4,5,6,7,8,9,1,2},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 };


	sodarray B = {1,2,3,4,5,6,7,8,9};
	sodarray C = {2,3,4,5,6,7,8,9,1};

	sodarray *paAnswer;

	paAnswer = getSodukuVector(ROW, 0, &A);
	CHECK_TRUE(paAnswer != 0);
	CHECK_TRUE(checkVector(paAnswer, &B));

	paAnswer = getSodukuVector(ROW, 1, &A);
	CHECK_TRUE(paAnswer != 0);
	CHECK_TRUE(checkVector(paAnswer, &C));

	paAnswer = getSodukuVector(ROW, 10, &A);
	CHECK_TRUE(paAnswer == 0);

	paAnswer = getSodukuVector(ROW, -10, &A);
	CHECK_TRUE(paAnswer == 0);

}

TEST(SodukuTests, checkgetSodukuColVector)
{
	sodpuzzle A = 	{{1,2,3,4,5,6,7,8,9},
					 {2,3,4,5,6,7,8,9,1},
					 {3,4,5,6,7,8,9,1,2},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 {1,2,3,4,5,6,7,8,9},
					 };


	sodarray B = {1,2,3,1,1,1,1,1,1};
	sodarray C = {2,3,4,2,2,2,2,2,2};

	sodarray *paAnswer;

	paAnswer = getSodukuVector(COL, 0, &A);
	CHECK_TRUE(paAnswer != 0);
	CHECK_TRUE(checkVector(paAnswer, &B));

	paAnswer = getSodukuVector(COL, 1, &A);
	CHECK_TRUE(paAnswer != 0);
	CHECK_TRUE(checkVector(paAnswer, &C));

}

bool checkVector(sodarray *paA, sodarray *paB)
{
	int i;
	for(i = 0; i < 9; i++)
	{
		if((*paA)[i] != (*paB)[i]) return false;
	}
	return true;
}
