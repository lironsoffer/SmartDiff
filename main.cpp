
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "testing.h"
#include "bagOfWords.h"
//#include "cmd.h"

using std::ifstream;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::cerr;

int main()
{
	vector <string> bag1,bag2,bag3;
	vector <int> repetitions1,repetitions2;
	unsigned int size1=0,size2=0;

	testAddToBag();
}
/*
int main(int argc,char* argv[])
{
  vector <string> bag1,bag2;
  vector <int> repetitions1,repetitions2;
  unsigned int size1=0,size2=0;
  if(argc>1)
  {
	  ifstream file1("myfile.txt");
	  if(file1.is_open())
	        {
	  		  createBag(bag1,repetitions1,file1);
	  	    }
	    else
	  	    {
	  		  cerr << "UNABLE TO OPEN FILE" << std::endl;
	  	    }
	  if(argc>2)
	  {

	  }


  }

  else
  {
	  cerr << "NO PARAMTERS" << std::endl;
  }

} */
