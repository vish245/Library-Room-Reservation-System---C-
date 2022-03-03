#include <iostream>
#include <string>
#include "Student.h"
#include "Room.h"
#include "Date.h"
#include "Reservation.h"

using namespace std;

int main() {

    Student Vishal("Vishal", "101204223");
    Student Arjun("Arjun", "1");
    Vishal.print();

    Room one("Spiderman", 5, 2, true);
    cout << "Request meets criteria (1 = true, 0 = false): " << one.meetsCriteria(3,3,true) << endl;
    one.print();
    
    Date today;
    Date today1(1901, 1, 1, 12, 1);

    today.print();
    today1.print();
    
    cout << "Request overlaps Date (1 = true, 0 = false): " << today.overlaps(today1) << endl;





    return 0;
}