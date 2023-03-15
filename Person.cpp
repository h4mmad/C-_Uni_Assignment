#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

//mutators
void Person::setFullName(string fullName) { this->fullName = fullName; }
void Person::setAge(int age) { this->age = age; }
void Person::setNationality(string nationality) { this->nationality = nationality; }

//accessors
string Person::getFullName() { return this->fullName; }
int Person::getAge() { return this->age; }
string Person::getNationality() { return this->nationality; }




Person::Person() {    //default constructor
	fullName = "";
	(fullName == "") ? (fullName = "VALUE NOT SET") : (fullName);

	this->age = 0;

	(nationality == "") ? (nationality = "VALUE NOT SET") : (nationality);
}

Person::Person(string fullName, int age, string nationality) { //overloaded constructor
	this->fullName = fullName;
	this->age = age;
	this->nationality = nationality;
}