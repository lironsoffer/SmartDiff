/*
 * cmd.h
 *
 *  Created on: Apr 25, 2016
 *      Author: liron_s
 */

#ifndef CMD_H_
#define CMD_H_

void matchCommandParameters(int argc, char **argv, int * v, int * u,
		int * threshold);
void printMsgToScreen(const std::string & v,const std::string & u,
		double identityLevel, double threshold);



#endif /* CMD_H_ */
