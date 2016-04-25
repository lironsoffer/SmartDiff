/*
 * compare.cpp
 *
 *  Created on: Apr 19, 2016
 *      Author: Ben
 */

#include "bagOfWords.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::ifstream;
using std::vector;
using std::cin;
using std::cout;

int findMin(const vector<int> &repetitions1,
		const vector<int> repetitions2, const size_t i, const size_t j)
{
	return (repetitions1[i]<repetitions2[j]?repetitions1[i]:repetitions2[j]);
}


int findMax(const int size1, const int size2)
{
	return (size1>size2?size1:size2);
}

double calculateSimilarity(const unsigned int counter,
		const unsigned int size)
{
	return (double(counter)/double(size));
}

int calculateCounter(const vector<string> &bag1,const vector<int> &repetitions1,
		const vector<string> &bag2, const vector<int> &repetitions2)
{
	int counter=0;
	size_t index;
	string word;
	for(size_t i=0;i<bag1.size();i++)
	{
		word=bag1[i];
		index=findInBag(bag2,word);
		if(index<bag2.size())
		{
			counter+=findMin(repetitions1,repetitions2,i,index);
		}
	}
	return counter;
}

double compare(const vector<string> &bag1,
		const vector<int> &repetitions1, const int size1,
		const vector<string> &bag2, const vector<int> &repetitions2,
		const int size2)
{
	return calculateSimilarity(calculateCounter(bag1,repetitions1,bag2,
			repetitions2),findMax(size1,size2));
}
