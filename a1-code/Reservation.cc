
#include <iostream>
#include <string>
#include "Reservation.h"

using namespace std;

// constructor
Reservation::Reservation(Student* stu, Room* r, Date& d) {
    student = stu;
    room = r;
    date.setDate(d);
}

// getters
Student* Reservation::getStudent() {
    return student;
}

Date Reservation::getDate() {
    return date;
}

Room* Reservation::getRoom() {
    return room;
}

// other functions

bool Reservation::lessThan(Reservation& res) {
    if (date.lessThan(res.date) == true) {
        return true;
    }
    return false;
}

bool Reservation::overlaps(const string& r, Date& d) {
    if (r == room->getName() && date.overlaps(d)) {
        return true;
    }
    return false;
}

void Reservation::print() {
    
    student->print();
    cout << endl;
    date.print();
    cout << endl;
    room->print();
}