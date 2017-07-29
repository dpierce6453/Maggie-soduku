/*
 * SodukuTests.cpp
 *
 *  Created on: Jul 23, 2017
 *      Author: dan
 */

#include <CppUTest/TestHarness.h>
#include "UsefulFunctions.h"


bool checkVector(int *a, int *b);


TEST_GROUP(SodukuTests)
{
};


TEST(SodukuTests, FirstTest)
{
	CHECK_TRUE(1 == 1);
}

TEST(SodukuTests, checkArrayTest)
{
	int A[9] = {1,2,3,4,5,6,1,8,9};
	int B[9] = {1,2,3,4,5,6,7,8,9};
	int C[9] = {2,2,2,2,2,2,2,2,2};

	CHECK_FALSE( checkSodukuArray(A) );
	CHECK_TRUE( checkSodukuArray(B) );
	CHECK_FALSE( checkSodukuArray(C) );

}
TEST(SodukuTests, checkgetSodukuVector)
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


	int B[9] = {1,2,3,4,5,6,7,8,9};
	int C[9] = {2,3,4,5,6,7,8,9,1};

	int *pAnswer;

	pAnswer = getSodukuVector(ROW, 0, &A);
	CHECK_TRUE(pAnswer != 0);
	CHECK_TRUE(checkVector(pAnswer, B));

	pAnswer = getSodukuVector(ROW, 1, &A);
	CHECK_TRUE(pAnswer != 0);
	CHECK_TRUE(checkVector(pAnswer, C));

}

bool checkVector(int *a, int *b)
{
	int i;
	for(i = 0; i < 9; i++)
	{
		if(a[i] != b[i]) return false;
	}
	return true;
}
