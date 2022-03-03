#include <iostream>
#include <string>
#include "Room.h"

using namespace std;

// Constructors
Room::Room(string n, int cap, int comp, bool hasWB) {
    name = n;
    capacity = cap;
    computers = comp;
    whiteboard = hasWB;
}

Room::Room(Room& oldRoom) {
    name = oldRoom.name;
    capacity = oldRoom.capacity;
    computers = oldRoom.computers;
    whiteboard = oldRoom.whiteboard;
}

// getters
string Room::getName() { return name; }
int Room::getCapacity() { return capacity; }
int Room::getComputers() { return computers; }
bool Room::hasWhiteBoard() { return whiteboard; }

// setters
void Room::setName(string n) { name = n; }
void Room::setCapacity(int c) { capacity = c; }
void Room::setComputers(int cp) { name = cp; }

// other methods
bool Room::meetsCriteria(int cap, int comp, bool hasWB) {
    if ((capacity >= cap) && (computers >= comp) && (whiteboard == hasWB)) {
        return true;
    }
    else if ((capacity >= cap) && (computers >= comp) && (whiteboard == true && hasWB == false)) {
      return true;
    }
    return false;
}

bool Room::lessThan(Room& s) {
    if (this->name < s.name) {
        return true;
    }
    return false;
}

void Room::print() {
    cout << "Room Name: " << getName() << endl;
    cout << "Capacity: " << getCapacity() << endl;
    cout << "Computers: " << getComputers() << endl;
    if ( hasWhiteBoard() == true) {
        cout << "Has WhiteBoard: " <<  "Yes!" << endl;
    }
    else {
        cout << "Has WhiteBoard: " <<  "No!" << endl;
    }
    
}


