#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
	string fullName;
	int age;
	string nationality;

public:
	//mutators
	void setFullName(string);
	void setAge(int);
	void setNationality(string);

	//accessors
	string getFullName();
	int getAge();
	string getNationality();



	Person();
	Person(string, int, string);
};

#endif // !PERSON_H

