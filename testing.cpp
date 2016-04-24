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
	cout << endl;
	for (vector<string>::size_type i=0;i<repetitions.size();i++)
		{
			cout << repetitions[i] << " ";
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
	std::vector<string> bag1,bag2;
	std::vector<int> repetitions1,repetitions2;

	//testCreateBag(bag1,repetitions1);
	//testIsLetter('a',true,&counter,fail);

	int size1=createBag(bag1,repetitions1);
	int size2=createBag(bag2,repetitions2);
	int size=findMax(size1,size2);
	int counter=calculateCounter(bag1,repetitions1,bag2,repetitions2);
	double similarity=calculateSimilarity(counter,size);



	print(fail,counter);
}
