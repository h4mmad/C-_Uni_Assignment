#pragma once
#ifndef GRADE_H
#define GRADE_H

#include <string>
#include <fstream>
using namespace std;

class Grade {
private:
	string sub1, sub2, sub3;
	const string MY_FILE = "grades.txt";
public:
	void  printGrades(string);
	void  addGradesToFile(string, string, string, string);
};


#endif