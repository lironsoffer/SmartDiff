/*
 * bagOfWords.h
 *
 *  Created on: Apr 12, 2016
 *      Author: liron_s
 */

/* bagOfWords.h This module divides the vectors/files into words and their
repetitions
 * It includes the following:
 * createBag : a function that creates a bag of words from a vector
 * createBag : a function that creates a bag of words from a file
 * addToDag : the function  puts a given string to a bag of words and returns
 * its index
 * updateRepetitions : a function updates a given index- related to a word and
 * updates the repetitions matching variable
 * findInBag: a function that returns the relevant index to a string, if dosn't
 * exist returns the size of the vector
   createWords: receives a string, divide it to words, returns the updated
   vector and relevant repetitions
   isValid: Gets a char as parameter, returns true if valid letter or false
   otherwise
 */
#ifndef BAG_H
#define BAG_H
/*
 * createBag :the file will be transferd  into a string vector
 * devide the string vector bag into words and count the repetitions of each
 * word into the repetitons vector
 *
 *@param bag - vector <string> & get the text from file
 *@param repetitions - vector <int> & hold the repetitons for each word
 *@param file- intxt.txt holds the txt- to be devided into a vector
 *
 *@return : Returns an integer value indicating if the extration of the vector
 *@return worked
 * 1 success
 * 0 failed
 */
/*
 * createBag :divids the string vector bag into words and count the repetitions
 * of each word into the repetitons vector

 *@param bag - vector <string> & get the text from file
 *@param repetitions - vector <int> & hold the repetitons for each word
 *
 *@return : Returns an integer value indicating if the extration of the vector
 *@return worked
 * 1 success
 * 0 failed
 */
/*
 * addToBag : add a given string to a bag and
 *
 *@param bag - vector <string> & our data (the bag of words)
 *@param repetitions - vector <int> & a vector holding the matching repetitions
 *@param str - const string & a string we are trying to find in bag
 *
 *@return : returns its index
  returns its size in case of a problem
 */
/*
 * updateRepetitions : verify if the repetitions vector is empty or not
 * and updates the repetitions vector
 *
 * @param repetitions - vector <int> &  a vector holding the matching repetitions
 * @param index - const size_t holds the relevent index for the word
 *
 * @return void
 */
/* findInBag : Returns the index of a string if exists, if dosn't exist returns
the size of the vector
 *@param bag - const vector <string> & the vector compared with
 *@param str - const string & the words we are looking in the vector
 *
 *@return size_t the index pointing to the word
 */
/* createWords : Gets a string, divide it to words and updates the vector
 *              bag and repetitions
 * @param bag -vector <string> & out data ("bag of words")
 * @param repetitions - vector <int> &  a vector holding the matching repetitions
 * @param str - const string & passes the adress for the string
 * @param size - int* a pointer holding the size
 *
 * @return void.
 */
/* isValid :  Gets a char as parameter, returns true if valid letter or false
otherwise
 *
 * @param letter - char holds the relevant char we need to verify
 *
 * @return bool -returns value if the char is a valid char we need
 * 1 vaild
 * 0 not valid
 */

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


int createBag(vector<string> &bag, vector<int> &repetitions, ifstream &file);
/* Creates a bag from a file and returns the size of the bag*/
int createBag(vector<string> &bag, vector<int> &repetitions);
/* Creates a bag from input and returns the size of the bag*/
size_t addToBag(vector<string> &bag, vector<int> &repetitions,
		const string &str);
/* Adds a given string to a bag and returns its index.
 * Returns its size in case of a problem*/
void updateRepetitions(vector<int> &repetitions, const size_t index);
/* Takes an index of a word and updates the repetition's matching variable */
size_t findInBag (const vector<string> &bag, const string &str);
/* Returns the index of a string if exists, if dosn't exist returns the size of
 * the vector */
void createWords(vector<string> &bag, vector<int> &repetitions,
		const string &str,int* size);
/* Gets a string, divide it to words and updates the vector bag and repetitions
 */
bool isValid(char letter);
/* Gets a char as parameter, returns true if valid letter or false otherwise */


#endif /* BAG_H_ */
