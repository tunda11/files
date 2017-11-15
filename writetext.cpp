#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
	ofstream outputFile;
	outputFile.open("abc.txt");
   
  
   //create some data
   
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   
    if (outputFile)
   {
	 outputFile << a << " " << b << " " << c << endl;
	}
 
   cout << a << " " << b << " " << c;//display data to console (i.e. as formatted chars)
	//outputFile << a << " " << b << " " << c << endl;
   cout<<endl<<endl;
 
	outputFile.close();
	
   return 0;
}
