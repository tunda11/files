#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
	ofstream outputFile;
	outputFile.open("abc.bin");
   
  
   //create some data
   
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   
    if (outputFile)
   {
	 outputFile.write ( reinterpret_cast<char*>(&a), sizeof (a));
	 outputFile.write ( reinterpret_cast<char*>(&b), sizeof (b));
	 outputFile.write ( reinterpret_cast<char*>(&c), sizeof (c));
	}
 else
	cout<<"Error opening data.bin";
   //cout << a << " " << b << " " << c;//display data to console (i.e. as formatted chars)
	//outputFile << a << " " << b << " " << c << endl;
   cout<<endl<<endl;
 
	outputFile.close();
	
   return 0;
}
