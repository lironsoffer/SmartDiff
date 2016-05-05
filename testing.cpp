/*
 * testing.cpp
 *
 *  Created on: Apr 14, 2016
 *      Author: liron_s
 */
#include "testing.h"
#include <vector>
#include <fstream>
#include <iomanip>
void print(const vector<int> &fail,int counter)
{
	cout << "\n\nTotal:" << counter << "\nSUCCEEDED:" << counter-fail.size()
			<< "\nFAILED:" << fail.size() << endl;
	if (fail.size()!=0)
	{
		cout << "\nDetails:" << endl;
		for(vector<int>::const_iterator iter=fail.begin(); iter!= fail.end();
				++iter)
		{
			cout << *iter << " ";
		}
	}
}
void testAddToBag(vector<string> &bag,vector<int> &repetitions,const string str,
		size_t expected, int* counter, vector<int> &fail)
{
	(*counter)++;
	if(!(addToBag(bag,repetitions,str)==expected))
	{
		fail.push_back(*counter);
	}
}

void testFindInBag(vector<string> &bag,const string str,size_t expected,
		int* counter, vector<int> &fail)
{
	(*counter)++;
	if(!(findInBag(bag,str)==expected))
	{
		fail.push_back(*counter);
	}
}

void testCreateBag(vector<string> &bag,vector<int> &repetitions)
{
	createBag(bag,repetitions);
	printBag(bag,repetitions);
}

void printBag(vector<string> &bag,vector<int> &repetitions)
{
	const char separator    = ' ';
		const int nameWidth = 8;
		const int numWidth = 8;
	for (vector<string>::size_type i=0;i<bag.size();i++)
	{
		cout << std::left << std::setw(nameWidth) << std::setfill(separator) <<
				bag[i];
	}
	cout << endl;
	for (vector<string>::size_type i=0;i<repetitions.size();i++)
		{
		cout << std::left << std::setw(numWidth) << std::setfill(separator) <<
				repetitions[i];
		}
}

void testisValid(char letter,bool expected, int* counter, vector<int> &fail)
{
	(*counter)++;
	if(isValid(letter)!=expected)
		fail.push_back(*counter);
}
void test()
{
	int counter=0;
	vector<int> fail;
	std::vector<string> bag1,bag2;
	std::vector<int> repetitions1,repetitions2;

	testCreateBag(bag1,repetitions1);
	//testisValid('a',true,&counter,fail);

	/*
	int size1=createBag(bag1,repetitions1);
	int size2=createBag(bag2,repetitions2);
	int size=findMax(size1,size2);
	int counter=calculateCounter(bag1,repetitions1,bag2,repetitions2);
	double similarity=calculateSimilarity(counter,size);
	*/


	print(fail,counter);
}
