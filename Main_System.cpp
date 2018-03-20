#include "Main_System.h"
#include <cassert>
//#include <stdio.h>

Main_System::Main_System(){} // constructor for main system

bool Main_System::set_reader(Reader* r){ // adding a reader to the list of readers
    for (unsigned char i=0; i<8; i++){ // looping until finding a place for the new reader
        if (L_R[i]==nullptr){
            L_R[i]=r;
            return (1==1); // return 1 if the process completed
            break;
        }
        return 0; // if the process failed return 0
    }
}

short int Main_System::get_availableSeats(unsigned char i){ // count the number of available seats
    if (L_R[i]!=nullptr){ // checking if the reader exists
        return L_R[i]->NumOf_available();} // call the function that counts the number

}

short int Main_System::get_usedSeats(unsigned char i ){ // getting the number of used seats
    if (L_R[i]!=nullptr){return L_R[i]->NumOf_used();}

}

unsigned char Main_System::Location_of(unsigned char student){ // getting a location of a student
    for (unsigned char i=0; i<8; i++){ //looping on classrooms
            if (L_R[i]!=nullptr && L_R[i]->get_seats(student)==1){ // if the class is available and the seat is taken then the student is there
                return i;
            }
    }
}
bool Main_System::if_occupied(unsigned char seat, unsigned char i){ //checking if a seat is taken
            if (L_R[i]!=nullptr && L_R[i]->get_seats(seat)==1){ //checking
                return (1==1);
            }
            else {return 0;}
}
void Main_System::reserve(Card *C, unsigned char R){ // entering a classroom
	Enter *x=new Enter(C,L_R[R]);
	assert(x);
	x->T_Action();
}

void Main_System::avail (Card *C, unsigned char R){ // leaving  a classroom
    	Leave *x=new Leave(C,L_R[R]);
	assert(x);
	x->T_Action();
}

Main_System::~Main_System(){}

/*
int main(){

	Card *c=new Card(1);
	Reader *r=new Reader(0);
	Main_System *system=new Main_System();
	system->set_reader(r);
	system->reserve(c,0);
	printf("%d\n",system->get_availableSeats(0));
	



	

}*/



