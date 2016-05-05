/*
 * cmd.h
 *
 *  Created on: Apr 25, 2016
 *      Author: liron_s
 */
/*
 * cmd.h : this module helps us match command to parameters , and prints message
 to screen
 * 	matchCommandParameters : verfiy the flags  returns changed value
 * 	printMsgToScreen : print the message to the screen
 */
/*
 * matchCommandParameters : check the flags (u,v,threshold) and put
 *  the location to thier value
 *
 *  @param argc - int hold the count of arguments resived in argv
 *  @param argv - char ** hold arguments name
 *  @param v -flag for input file 1
 *  @param u -flag for input file 2
 *  @param threshold - flag holds the identy percent
 *
 *	@return void
 */
#ifndef CMD_H_
#define CMD_H_

/*
 * printMsgToScreen : prints message  to screen
 *
 * @param v - const string & v used in output message
 * @param u - const string & v used in output message
 * @param identityLevel - identityLevel used in output message
 * @param threshold - threshold used in output message
 */

void matchCommandParameters(int argc, char **argv, int * v, int * u,
		int * threshold);
void printMsgToScreen(const std::string & v,const std::string & u,
		double identityLevel, double threshold);



#endif /* CMD_H_ */
