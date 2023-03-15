#pragma once
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

//functions to set student information
void Student::setMatricNo(string matricNo) {
	this->matricNo = matricNo;
};
void Student::setYearOfStudy(int yearOfStudy) {
	this->yearOfStudy = yearOfStudy;
};
void Student::setCourse(string course) {
	this->course = course;
};


// this calls class Grade's function of printGrades;
void Student::printGrades() {
	grade.printGrades(this->matricNo);   
};

// this calls class Grade's function of addGradesToFile;
void Student::setGrades(string s1, string s2, string s3) {
	grade.addGradesToFile(this->matricNo, s1, s2, s3);
}



//default constructor
Student::Student() {

	(matricNo == "") ? (matricNo = "VALUE NOT SET") : (matricNo = matricNo);

	this->yearOfStudy = 0;

    (course == "") ? (course = "VALUE NOT SET") : (course = course);
}

//overloaded constructor passes values to it's parent class constructor
Student::Student(string name, int age, string nationality) :
	Person(name, age, nationality)
{

}


//overloaded << operator, prints student information to terminal
ostream& operator<<(ostream& COUT,  Student student) { 

	COUT << "------------------------------" << endl;
	COUT << "------STUDENT INFORMATION-----" << endl;
	COUT << "------------------------------" << endl;
	COUT << "Name: " << student.getFullName() << endl;
	COUT << "Age: " << student.getAge() << endl;
	COUT << "Nationality: " << student.getNationality() << endl;
	COUT << endl;
	COUT << "Matric No: " << student.matricNo << endl;
	COUT << "Year of study: " << student.yearOfStudy << endl;
	COUT << "Course: " << student.course << endl;
	COUT << endl;
	student.printGrades();
	COUT << "------------------------------" << endl;
	return COUT;
}