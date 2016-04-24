
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "testing.h"
#include "bagOfWords.h"
#include "cmd.cpp"
//#include "cmd.h"

using std::ifstream;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::cerr;

//char* extractFileName(char** const argv, const int index);
/*
int main()
{
	test();
}*/


int main(int argc,char** argv)
{
	int v;
	int u;
	int threshold;

	vector <string> bag1,bag2;
	vector <int> repetitions1,repetitions2;
	int counter,size1,size2;

  matchCommandParameters(argc,argv ,&v ,&u ,&threshold);
  if(argc>1)
  {
	  if (v==-1) // No first file
	  {
		  cerr << "NO PARAMTERS" << std::endl;

	  }
	  else // First file exists
	  {
		  ifstream myfile1 (argv[v]);
		  if (myfile1.is_open())
		  {
			  size1=createBag(bag1,repetitions1,myfile1);
			  myfile1.close();
		  }
		  else
		  {
			  cerr << "UNABLE TO OPEN FILE";
		  }
	  }
	  if(u==-1) // No second file
	  {
		  createBag(bag2,repetitions2);
	  }
	  else // Second file exists
	  {
		   ifstream myfile2 (argv[u]);
		   if (myfile2.is_open())
		   {
			  size2=createBag(bag2,repetitions2,myfile2);
			  myfile2.close();
		   }
		   else
		   {
			   cerr << "UNABLE TO OPEN FILE";
		   }
	  }

	  cout<<"Size1="<<size1<<"   Size2="<<size2<<endl;
	  //cout<<compare(bag1,repetitions1,size1,bag2,repetitions2,size2)<<endl;


  }
  else
  {
	  cerr << "NO PARAMTERS" << std::endl;
  }
  return 0;
}

/*
char* extractFileName(char** const argv,const int index)
{
	return argv[index];
}
*/
