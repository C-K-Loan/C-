#include <iostream>
//#include <vecotr>
#include <string>
#include <fstream>

using  namespace std;

int main () {
	cout << " Hello world "<< endl; 
	cout << " This is 2nd easy c++ prinzs" << endl;

	const double PI = 3.13123;

	char myFavLetter = 'f' ;/// one char 
	
	bool isHappy = true;
	char myName[5][5]= {{'D'}, {'h'}};
	int myAge = 39;

	float favNum = 3.23323;
	cout << "myname: " << myName <<endl;
	double otherfavNum = 1.42424;

	cout << "casting "<<(float)4/5<< endl;
	cout <<"Fav num " <<favNum << endl;// just put Cout, <<, string, << vars, 

	cout << "My age" << myAge << endl;
	cout << "size of char" << sizeof(myFavLetter)<<endl;
	return 0;
}