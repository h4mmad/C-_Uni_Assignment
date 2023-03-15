#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"
#include "Grade.h"

using namespace std;

class Student : public Person {
private:
	int yearOfStudy;
	string course;
	string matricNo;
	Grade grade;


public:
	void setMatricNo(string);
	void setYearOfStudy(int);
	void setCourse(string);

	void printGrades(); // this calls grade's function of printGrades;
	void setGrades(string, string, string); 
	
	Student();
	Student(string, int, string);

	//declared as friend as ostream is not part of student class
	friend ostream& operator<<(ostream& COUT, const Student student);
};



#endif