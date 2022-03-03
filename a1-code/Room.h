#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>

using namespace std;

class Room {
    public:
        // Constructors
        Room(string name, int capacity, int computers, bool whiteboard);
        Room(Room&);

        // getters
        string getName();
        int getCapacity();
        int getComputers();
        bool hasWhiteBoard();

        // setters
        void setName(string name);
        void setCapacity(int capacity);
        void setComputers(int computers);
        

        // other functions
        bool meetsCriteria(int capacity, int computers = 0, bool whiteboards = false);
        bool lessThan(Room& r);
        string hasWBToString();
        void print();


    private:
        string name;
        int capacity, computers;
        bool whiteboard;
};

#endif