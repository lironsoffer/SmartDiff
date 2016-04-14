/*
 * compare.h
 *
 *  Created on: Apr 12, 2016
 *      Author: liron_s
 */

#ifndef COMPARE_H_
#define COMPARE_H_

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::ifstream;
using std::vector;
using std::cin;
using std::cout;

int calculateCounter();
int findMin(const vector<int> &bag1, const vector<int> bag2, const size_t i,
		const size_t j);
/* Gets two repetitions vectors and indexes for a string.
 * Returns the minimum of the repetitions between the two vectors*/
int findMax(const int size1, const int size2);
/* Returns the max between two integers */
double calculateSimilarity(const unsigned int counter, const unsigned int size);
/* Calculate the similarity percentage between two bags */
//double compareThreshold(const double threshold, const unsigned int similarity);
/* Compare the required similarity percentage to the required */



#endif /* COMPARE_H_ */