
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        // Constructors
        Student();
        Student(string name, string number);
        Student(Student&);

        bool lessThan(Student& s);

        // getters and setters
        string getNumber();
        void setNumber(string number);
        string getName();
        void setName(string name);

        //print function
        void print();

        


    private:
        string name, number;

};

#endif