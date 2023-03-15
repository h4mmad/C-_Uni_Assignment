#pragma once
#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H



#include <iostream>
#include "Student.h"
using namespace std;


//validation checks to see if the student has appropiate year of study
void checkYearOfStudy(int &year) {
	bool valid = false;
	while (!valid)
	{
		cin >> year;
		if (year <= 0 || cin.fail()) {
			cout << "Enter a study year greater than 0: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		else {
			valid = true;
		}			
	}
}


//checks that the user age is between 0 and 100 years, and the user is inputting an int value
void checkAge(int& age) {
	bool valid = false;
	while (!valid)
	{
		cin >> age;
		if ((age <= 0 || age >= 100) || cin.fail()) {
			cout << "Enter an age greater than 0 and less than 100: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		else {
			valid = true;
		}

	}
}

//checks the number is valid to set array size
bool intValidate(int& number) {
	bool valid = false;
	while (!valid) { // repeat as long as the input is not valid
		cin >> number;
		if (cin.fail() || (number <= 0))
		{
			cout << "Enter an integer greater than 0: ";
			// clear error flags
			cin.clear();
			// Wrong input remains on the stream, so you need to get rid of it
			cin.ignore(INT_MAX, '\n');
		}
		else
		{
			valid = true;
			return valid;
		}
	}
}




void showMenu(const int index, const int size, Student* arr) {
	int age = 0, yearOfStudy = 0;
	string fullName="", matric, degree, nationality, sub1, sub2, sub3;

	int choice = 0;
	do {
		cout << "----------------------------------" << endl;
		cout << "Enter details for student #" << index + 1 << endl;
		cout << "----------------------------------" << endl;
		cout << "1.Add name, matric number" << endl;
		cout << "2.Add year of study, degree" << endl;
		cout << "3.Add nationality, age" << endl;
		cout << "4.Add grades" << endl;
		cout << "----------------------------------" << endl;
		cout << "5.Display students information" << endl;
		
		//if the last student in the array is reached, then the menu option changes
		if (index == (size - 1)) {
			cout << "6.Quit" << endl;
		}
		else {
			cout << "6.Next student" << endl;
		}

		cout << "Enter choice: ";
		cin >> choice;
		cin.ignore(123, '\n');

		switch (choice)
		{
		case 1:

			cout << "Full name: ";
			getline(cin, fullName);
			arr[index].setFullName(fullName);

			
			cout << "Matric No: ";
			cin >> matric;
			arr[index].setMatricNo(matric);
			break;

		case 2:
			cout << "Year of study: ";
			checkYearOfStudy(yearOfStudy);
			arr[index].setYearOfStudy(yearOfStudy);

			cin.ignore(123, '\n');

			cout << "Degree: ";
			getline(cin, degree);
			arr[index].setCourse(degree);

			break;

		case 3:
			cout << "Nationality: ";
			cin >> nationality;
			arr[index].setNationality(nationality);

			cin.ignore(123, '\n');

			cout << "Age: ";
			checkAge(age);
			arr[index].setAge(age);
			break;

		case 4:
			cout << "Enter grades for subject 1: ";
			cin >> sub1;
			cout << "Enter grades for subject 2: ";
			cin >> sub2;
			cout << "Enter grades for subject 3: ";
			cin >> sub3;
			arr[index].setGrades(sub1, sub2, sub3);
			cin.ignore(123, '\n');
			break;
		case 5:
			for (int i = 0; i < size; i++) {
				cout << "Student #" << i + 1 << endl;
				cout << arr[i];
			}
			break;
		case 6:
			break;

		default:
			break;
		}
	} while (choice != 6);
}


#endif // !HELPERFUNCTIONS_H
