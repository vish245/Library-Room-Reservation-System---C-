all: a1

a1-global.o: a1-global.cc Student.h Date.h Room.h Reservation.h Library.h
	g++ -c a1-global.cc

Student.o: Student.h Student.cc
	g++ -c Student.cc

Date.o: Date.h Date.cc
	g++ -c Date.cc

Room.o: Room.h Room.cc
	g++ -c Room.cc

Reservation.o: Reservation.h Reservation.cc
	g++ -c Reservation.cc

Library.o: Library.h Library.cc
	g++ -c Library.cc

a1: a1-global.o Student.o Date.o Room.o Reservation.o Library.o
	g++ -o a1 Date.o Student.o Room.o Reservation.o Library.o a1-global.o

clean:
	rm -f a1 *.o

