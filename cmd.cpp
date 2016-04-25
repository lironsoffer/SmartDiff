/*
 * cmd.cpp
 *
 */

#include <iostream>
#include <cstring>
#include <string>
//#include "cmd.h"

void matchCommandParameters(int argc, char **argv, int * v, int * u, int * threshold)
{
	int i = 1;
	*(v) = -1;
	*(u) = -1;
	*(threshold) = -1;
	while (i < argc) {
		if (strcmp(argv[i], "-u") == 0) {
			*(u) = i + 1;
			i += 2;
			continue;
		}
		if (strcmp(argv[i], "-v") == 0) {
			*(v) = i + 1;
			i += 2;
			continue;
		}
		if (strcmp(argv[i], "-threshold") == 0) {
			*(threshold) = i + 1;
			i += 2;
			continue;
		}
		i++;
	}
}

void printMsgToScreen(const std::string & v,const std::string & u,
		double identityLevel, double threshold)
{
	std::cout << "V: " << v << ", " << "U: " << u << ", " << "IDENTITY: "
			<< identityLevel << ", ";
	if (identityLevel >= threshold) {
		std::cout << "SUSPECTED: " << 1 << std::endl;
	} else {
		std::cout << "SUSPECTED: " << 0 << std::endl;
	}
}

