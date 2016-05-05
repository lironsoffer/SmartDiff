/*
 * compare.h
 *
 *  Created on: Apr 12, 2016
 *      Author: liron_s
 *
 * Deals with
 */
/*
 * compare.h : this module provides calculation factions
 *
 * findMin: Returns the minimum of the repetitions between the two vectors
 * findMax: Returns the maximum of the repetitions between the two vectors
 * calculateSimilarity: calculate and return the identitylevel
 * compareThreshold:  Compare the required similarity percentage to the required
 * calculateCounter: Calculates the counter according to the assignment
 * compare: Calls all the required functions
*/


#ifndef COMPARE_H_
#define COMPARE_H_
/*
 * findMin:  Gets two repetitions vectors and indexes for a string
 *           Returns the minimum of the repetitions between the two vectors
 *
 *           @param bag1 - vector <int> hold int vector bag1
 *           @param bag2 - vector <int> hold int vector bag2
 *           @param i - const size_t
 *           @param j - const size_t
 *
 *           @returns the minimum repetitions between the two vectors
 *
 * findMax:  Returns the max between two integers
 *
 *			 @para, size1 - const int
 *			 @para, size2 - const int
 *
 * @returns the maximum between twon integers
 *
 * calculateSimilarity: calculate and return the identitylevel
 *
 * 						@param counter - const unsigned int
 * 						@param size - const unsigned int
 *
 * 						@returns the identitylevel
 *
 * compareThreshold: Compare the required similarity percentage to the required
 *
 * 					@param threshold - const double percentage of idendity level
 * 					@param similarity - const unsgined int percentage of
 * 					similarity
 *
 * 					@returns the similarity level
 *
 *
 *
 *
 * calculateCounter: this function calls function findbag and receives the index
                       counter changes by if function - returns counter

                 @param bag1 - const vector<string> & data structure holding
                 words
                 @param repititions1 - const vector<int> & data structure
                 holding numbers
                 @param bag2 - const vector<string> & data structure holding
                 words
                 @param repititions2 - const vector<int> & data structure
                 holding numbers

                 @returns size of counter


 * compare: compare between the two strings uses the integer vector for each one
            returns the result by calling the calculateSimilarity function

            @param bag1 - const vector <string> & data structure containing
            string
            @param repitions1 - const vector <int> & data structure containing
            integers
            @param size1 - const int
            @param bag2 - const vector <string> & data structure containing
            string
            @param repitions2 - const vector <int> & data structure containing
            integers
            @param size2 - const int

			@returns the result by calling the caluclateSimilarty funcation

 */

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::ifstream;
using std::vector;
using std::cin;
using std::cout;

int findMin(const vector<int> &bag1, const vector<int> bag2, const size_t i,
		const size_t j);
/* Gets two repetitions vectors and indexes for a string.
 * Returns the minimum of the repetitions between the two vectors*/
int findMax(const int size1, const int size2);
/* Returns the max between two integers */
double calculateSimilarity(const unsigned int counter, const unsigned int size);
/* Calculate the similarity percentage between two bags */
double compareThreshold(const double threshold, const unsigned int similarity);
/* Compare the required similarity percentage to the required */
int calculateCounter(const vector<string> &bag1,const vector<int> &repetitions1,
		const vector<string> &bag2, const vector<int> &repetitions2);
/* Calculates the counter according to the assignment*/
double compare(const vector<string> &bag1, const vector<int> &repetitions1,
		const int size1, const vector<string> &bag2,
		const vector<int> &repetitions2, const int size2);
/* Calls all the required functions */
#endif /* COMPARE_H_ */
