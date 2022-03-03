#include <iostream>
#include <string>
#include "Library.h"

using namespace std;

// constructor
Library::Library() {
    students = new Student*[MAX_ARRAY];
    reservations = new Reservation*[MAX_ARRAY];
    studentCount = 0;
    reservationCount = 0;
    roomCount = 0;
}

// destructor
Library::~Library() {

    // free's dynamically allocated student array
    for (int i = 0; i < studentCount; ++i) {
        delete students[i];
    }
    delete [] students;

    // free's dynamically allocated reservation array
    for (int i = 0; i < reservationCount; ++i) {
        delete reservations[i];
    }
    delete [] reservations;

    // free's dynamically allocated Student array
    for (int i = 0; i < roomCount; ++i) {
        delete rooms[i];
    }
}

// other functions

bool Library::addStudent(const string& name, const string& num ) {
    if (studentCount < MAX_ARRAY) {
        students[studentCount++] = new Student(name, num);
        return true;
    }
    return false;
}

bool Library::addRoom(string n, int cap, int comp, bool hasWB) {
    if (roomCount < MAX_ARRAY) {
        rooms[roomCount++] = new Room(n, cap, comp, hasWB);
        return true;
    }
    return false;
}

// goes through all elements of the student array and checks if given student in present.
bool Library::getStudent(const string& name, Student** student) {
    for (int i = 0; i < studentCount; ++i) {
        if (students[i]->getName() == name) {
            *student = students[i];
            return true;
        }
    }
    return false;
}

// goes through all elements of the room array and checks if given room in present.
bool Library::getRoom(const string& name, Room** room) {
    for (int i = 0; i < roomCount; ++i) {
        if (rooms[i]->getName() == name) {
            *room = rooms[i];
            return true;
        }
    }
    return false;
}

// checks if booking slot is free.
bool Library::isFree(const string& roomName, Date& d) {
    Room* rm;
    if(getRoom(roomName,&rm)==false){return false;}
    for (int i = 0; i < reservationCount; ++i) {
        if(reservations[i]->overlaps(roomName,d)==true){return false;}
    }
    return true;
}

// makes a new reservation and adds it to the array.
bool Library::makeReservation(const string& student, const string& room, Date& d) {
    Room* rm;
    Student* st;
    if (getRoom(room, &rm)==false) {return false;}
    if (getStudent(student, &st)==false) {return false;}

    if (isFree(room, d) == false ||reservationCount >= MAX_ARRAY) {return false;}    
    reservations[reservationCount++] = new Reservation(st,rm,d);
    return true;
}

//isFree(room, d) == false || 
void Library::printReservations() {
    for (int i = 0; i < reservationCount; ++i) {
        reservations[i]->print();
    }
}



