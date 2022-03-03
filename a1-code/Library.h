#ifndef LIBRARY_H
#define  LIBRARY_H
#define MAX_ARRAY 50

#include <iostream>
#include <string>
#include "Date.h"
#include "Student.h"
#include "Room.h"
#include "Reservation.h"

using namespace std;

class Library {
    public:
        // Constructors
        Library();

        // Destuctor
        ~Library();

        // other functions
        bool addStudent(const string& name, const string& number);
        bool addRoom(string n, int cap = 1, int comp = 0, bool hasWB = false);
        bool getStudent(const string& name, Student** student);
        bool getRoom(const string& roomName, Room** room);
        bool isFree(const string& room, Date&);
        bool makeReservation(const string& student, const string& room, Date& );
        void update(Date&);

        //print function
        void printReservations();


    private:
        Student ** students;
        Room* rooms[MAX_ARRAY];
        Reservation ** reservations;
        int studentCount, reservationCount, roomCount;

};

#endif