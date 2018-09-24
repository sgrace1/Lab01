// Lab01.cpp : Defines the entry point for the console application.
// Spencer Grace
// COSC 2030


#include "iostream"
#include "fstream"
using std::ifstream;
using std::ofstream;
#include<string>
using std::string;

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::getline;


string prompt() 
{
	string file;
	cout << "Please enter a file name . . .";
	cin >> file;
	return file;
}



int main()
{
	

	int counter = 0;

	double a;  //temp variable
	double b;  //temp variable
	double c;  //temp variable
	double d = 0;  //temp variable must be initalized to start

	string inHolder;
	string outname;
	ifstream inFile; 

	inHolder = prompt();
	
	inFile.open(inHolder);  //opens file


	if (!inFile.is_open())  //error handling
	{
		cerr << "Could not open: " << inHolder << endl;
		return 1;
	}

	int temp = 0;
	while (true) // goes forever until it hits the break
	{	
		
		inFile >> temp;
		if (inFile.eof()) 
		{
			break; // this will end the loop
		}
		if (counter == 0) 
		{
			a = temp;
			counter++;
			continue;
		}
		if (counter == 1) 
		{
			b = temp;
			counter++;
			continue;
		}

		c = d;  //this iterates the temp variable between c and d
		d = temp;
		
		counter++;
		

	}



	cout << "The total numbers in the file is " << counter << endl;
	cout << "the first number in the file is " << a << endl;
	cout << "the second number in the file is " << b << endl;
	cout << "the second to last number in the file is " << c << endl;
	cout << "the last number in the file is " << d << endl;

    return 0;
}

