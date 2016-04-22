/*
 * bagOfWords.h
 *
 *  Created on: Apr 12, 2016
 *      Author: liron_s
 */

#ifndef BAG_H
#define BAG_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::ifstream;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

typedef std::string::size_type index_in_bag;

int createBag(vector<string> &bag, vector<int> &repetitions, ifstream &file);
/* Creates a bag from a file and returns the size of the bag*/
int createBag(vector<string> &bag, vector<int> &repetitions);
/* Creates a bag from input and returns the size of the bag*/
size_t addToBag(vector<string> &bag, vector<int> &repetitions, const string &str);
/* Adds a given string to a bag and returns its index.
 * Returns its size in case of a problem*/
void updateRepetitions(vector<int> &repetitions, const size_t index);
/* Takes an index of a word and updates the repetition's matching variable */
size_t findInBag (const vector<string> &bag, const string &str);
/* Returns the index of a string if exists, if dosn't exist returns -1 */
void createWords(vector<string> &bag, vector<int> &repetitions, const string &str);
/* Gets a string, divide it to words and updates the vector bag and repetitions */
bool isLetter(char letter);
/* Gets a char as parameter, returns true if valid letter or false otherwise */


#endif /* BAG_H_ */
