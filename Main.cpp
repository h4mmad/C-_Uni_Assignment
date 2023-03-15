#include <iostream>
#include <string>
#include "Student.h"			
#include "HelperFunctions.h"    //functions that help the main function
using namespace std;

int main() {
	
	//Variables used for user input
	int size=0, index=0;
	
	//nullptr of type Student declared that will hold the address of the dynamic array
	Student* studentArr = nullptr;

	cout << "----------------------------------" << endl;
	cout << "------- USM student portal -------" << endl;
	cout << "----------------------------------" << endl;
	cout << endl;
	
	

	cout << "Please enter the number of students you want to store: ";
	//intValidate validates that the user input is an integer and return a bool
	//if true the array of that size is defined.
	if (intValidate(size)) {			 
		studentArr = new Student[size];  //Object of type Student, dynamic array, size set at run time, memory allocated on the heap
	}

	
	for (int i = 0; i < size; i++) {
		showMenu(i, size, studentArr);  // call to showMenu function which displays the menu
	}
	
	
	
	delete[] studentArr; // freeing memory from the heap

	return 0;
}


