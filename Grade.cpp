#include "Grade.h"
#include <iostream>
#include <string>
using namespace std;

void  Grade::printGrades(string matricNo) {

	ifstream inFile(MY_FILE);
	string a;

	while (inFile.eof() != 1) // checks if end of file reached
	{
		inFile >> a;

		inFile.ignore();
		if (a == matricNo) {              //the subject grades are read, if matric number is found
			getline(inFile, sub1, '\t');
			getline(inFile, sub2, '\t');
			getline(inFile, sub3);

			cout << "Grades: " << endl;
			cout << "Subject 1" << ": " << sub1 << endl;
			cout << "Subject 2" << ": " << sub2 << endl;
			cout << "Subject 3" << ": " << sub3 << endl;
			break;
		}
		if (a != matricNo && inFile.eof() == 1) {
			cout << "Matric number not found in text file" << endl;
			cout << "Cannot show grades" << endl;
		}
	}
	inFile.close();
};


//appends subject grades to file
void  Grade::addGradesToFile(string matricNo, string sub1, string sub2, string sub3) {
	
	this->sub1 = sub1;
	this->sub2 = sub2;
	this->sub3 = sub3;


	ofstream outFile(MY_FILE, ios::app);
	outFile << "\n";
	outFile << matricNo << '\t';
	outFile << this->sub1 << '\t';
	outFile << this->sub2 << '\t';
	outFile << this->sub3;
	outFile.close();
}