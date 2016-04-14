/*
 * testing.cpp
 *
 *  Created on: Apr 14, 2016
 *      Author: liron_s
 */
#include "testing.h"
#include <vector>
void print(const vector<int> &fail,int counter)
{
	cout << "Total:" << counter << "\nSUCCEEDED:" << counter-fail.size()
			<< "\nFAILED:" << fail.size() << endl;
	if (fail.size()!=0)
	{
		cout << "\nDetails:" << endl;
		for(vector<int>::const_iterator iter=fail.begin(); iter!= fail.end(); ++iter)
		{
			cout << *iter << " ";
		}
	}
}
void testAddToBag(vector<string> &bag,vector<int> &repetitions,const string str,size_t expected, int* counter, vector<int> &fail)
{
	(*counter)++;
	if(!(addToBag(bag,repetitions,str)==expected))
	{
		fail.push_back(*counter);
	}
}

void testFindInBag(vector<string> &bag,const string str,size_t expected, int* counter, vector<int> &fail)
{
	(*counter)++;
	if(!(findInBag(bag,str)==expected))
	{
		fail.push_back(*counter);
	}
}

void test()
{
	vector<int> fail;
	int counter = 0;
	std::vector<string> bag;
	std::vector<int> repetitions;
	addToBag(bag,repetitions,"ABC");
	addToBag(bag,repetitions,"ABCD");
	addToBag(bag,repetitions,"ABCDE");
	addToBag(bag,repetitions,"ABCDEF");

	testFindInBag(bag,"ABCD",1,&counter,fail);
	testFindInBag(bag,"ABCDE",2,&counter,fail);
	testFindInBag(bag,"ABE",4,&counter,fail);

	testAddToBag(bag,repetitions,"ABE",4,&counter,fail);
	testAddToBag(bag,repetitions,"ABE",4,&counter,fail);
	testAddToBag(bag,repetitions,"ABE",4,&counter,fail);
	testAddToBag(bag,repetitions,"ABC",0,&counter,fail);

	print(fail,counter);
}
