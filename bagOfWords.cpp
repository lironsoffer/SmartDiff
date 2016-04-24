/*
 * bagOfWords.cpp
 *
 *  Created on: Apr 12, 2016
 *      Author: liron_s
 */

#include "bagOfWords.h"

int createBag(vector<string> &bag, vector<int> &repetitions, ifstream &file)
{
	int size=0;
	string str;
	if (file.is_open())
	{
		while (getline(file,str))
		{
			createWords(bag,repetitions,str,&size);
		}
	}
	else
	{
		cerr << "UNABLE TO OPEN FILE" << endl;
	}

	return size;
}

int createBag(vector<string> &bag, vector<int> &repetitions)
{
	int size=0;
	string str;
	while (getline(cin,str))
	{
		createWords(bag,repetitions,str,&size);
	}

	return size;
}

size_t addToBag(vector<string> &bag, vector<int> &repetitions,
		const string &str)
{
	vector<string>::size_type index;
	if (bag.empty())
	{
		bag.push_back(str);
		index=bag.size()-1; //Equals to 0
	}
	else
	{
		index = findInBag(bag,str);
		if (index==bag.size())
		{
			bag.push_back(str);
			index=bag.size()-1; // Equals to the previous index
		}
	}
	updateRepetitions(repetitions, index);
	return index;
}

void updateRepetitions(vector<int> &repetitions, const size_t index)
{
	if (repetitions.empty())
	{
		if (index!=0)
		{
			cerr << "ERROR: CREATING BAG" << endl;
		}
		else
		{
			repetitions.push_back(1);
		}
	}
	else
	{
		if (repetitions.size()==index)
		{
			repetitions.push_back(1);
		}
		else
		{
			repetitions[index]++;
		}

	}
	return;
}

size_t findInBag (const vector<string> &bag, const string &str)
{
	vector<string>::size_type i=0;
	while((i<bag.size())&&(bag[i]!=str))
	{
		i++;
	}

	return i;
}

void createWords(vector<string> &bag, vector<int> &repetitions, const string &str,int* size)
{
	string word="";
	for(string::size_type i=0;i<str.size();i++)
	{
		char letter=str[i];
		if (isLetter(letter))
		{
			word+=tolower(letter);
		}
		else
		{
			addToBag(bag, repetitions, word);
			word="";
			(*size)++;
		}
	}
}

bool isLetter(char letter)
{
	if(((letter>='a') && (letter<='z'))||((letter>='A') && (letter<='Z')))
	{
		return true;
	}
	return false;
}
