/*
 * SodukuTests.cpp
 *
 *  Created on: Jul 23, 2017
 *      Author: dan
 */

#include <CppUTest/TestHarness.h>
#include "UsefulFunctions.h"

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
