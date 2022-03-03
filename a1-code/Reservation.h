#ifndef RESERVATION_H
#define  RESERVATION_H

#include <iostream>
#include <string>
#include "Date.h"
#include "Student.h"
#include "Room.h"

using namespace std;

class Reservation {
    public:
        // Constructor
        Reservation();
        Reservation(Student* student, Room* room, Date& date);

        //getters
        Student* getStudent();
        Room* getRoom();
        Date getDate();

        //other functions
        bool lessThan(Reservation& res);
        bool overlaps(const string& r, Date& d);
        void print();

    private:
        Student* student;
        Room* room;
        Date date;
};

#endif