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
	cout << "\n\nTotal:" << counter << "\nSUCCEEDED:" << counter-fail.size()
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

void testCreateBag(vector<string> &bag,vector<int> &repetitions)
{
	createBag(bag,repetitions);
	for (vector<string>::size_type i=0;i<bag.size();i++)
	{
		cout << bag[i] << " ";
	}

}

void testIsLetter(char letter,bool expected, int* counter, vector<int> &fail)
{
	(*counter)++;
	if(isLetter(letter)!=expected)
		fail.push_back(*counter);
}
void test()
{
	vector<int> fail;
	int counter = 0;
	std::vector<string> bag;
	std::vector<int> repetitions;

	testCreateBag(bag,repetitions);
	//testIsLetter('a',true,&counter,fail);


	print(fail,counter);
}
