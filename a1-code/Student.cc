#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

// Constructors

Student::Student() {
    
}

Student::Student(string n, string num) {
    name = n;
    number = num;
}

// COPY CONSTRUCTOR
Student::Student(Student& oldStudent) {
    name = oldStudent.name;
    number = oldStudent.number;
}

// getters and setters

string Student::getNumber() {return number; }

string Student::getName() { return name; }

void Student::setName(string n) { name = n; }

void Student::setNumber(string num) { number = num; }

// other methods
bool Student::lessThan(Student& s) {
    if (this->number < s.number) {
        return true;
    }
    return false;
}

void Student::print() {
    cout << "Student name: " << name << " with number " << number << endl;
}