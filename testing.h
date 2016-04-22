/*
 * testing.h
 *
 *  Created on: Apr 14, 2016
 *      Author: liron_s
 */

#ifndef TESTING_H_
#define TESTING_H_

#include "bagOfWords.h"

void testAddToBag(vector<string> &bag,vector<int> &repetitions,const string str,size_t expected, int* counter, vector<int> &fail);
void testFindInBag(vector<string> &bag,const string str,size_t expected, int* counter, vector<int> &fail);
void testCreateBag(vector<string> &bag,vector<int> &repetitions);
void testIsLetter(char letter,bool expected, int* counter, vector<int> &fail);
void test();


#endif /* TESTING_H_ */
