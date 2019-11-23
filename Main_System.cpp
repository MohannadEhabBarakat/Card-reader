#include "Main_System.h"
#include <cassert>
#include <stdio.h>

Main_System::Main_System(){} // constructor for main system

bool Main_System::set_reader(Reader* r){ // adding a reader to the list of readers
    /*for (unsigned char i=0; i<8; i++){ // looping until finding a place for the new reader
        if (L_R[i]==nullptr){
            L_R[i]=r;
            return (1==1); // return 1 if the process completed
            break;
        }
        return 0; // if the process failed return 0
	
    } */
if(r->get_ser()<8){
        L_R[r->get_ser()]=r;
        return (1==1);
    }
    return 0;
	
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
void Main_System::reserve(unsigned char crd, unsigned char R){ // entering a classroom
    Card *card =L_C[crd];
	Enter *x=new Enter(card,L_R[R]);
	assert(x);
	x->T_Action();
}

void Main_System::avail (unsigned char crd, unsigned char R){
     // leaving  a classroom
    Card *C=L_C[crd];
    Leave *x=new Leave(C,L_R[R]);
	assert(x);
	x->T_Action();
}
bool Main_System::set_card(Card*c){
    if(c->get_Card_Num()<256){
        L_C[c->get_Card_Num()]=c;
        return (1==1);
    }
    return 0;
}

Main_System::~Main_System(){}



/*


int main(){

	Card *c=new Card(1);
	//Card *c1= new Card(2);
	//Card *c3= new Card (3);
	Reader *r=new Reader(0);
	//Reader *r1=new Reader(2);
	//Reader *r2=new Reader(3);
	Main_System *system=new Main_System();
	system->set_reader(r);
	//system->set_reader(r1);
	//system->set_reader(r2);
	system->set_card(c);
	//system->set_card(c1);
	//system->set_card(c3);
	system->reserve(1,0);
	
	printf("%d\n",system->get_availableSeats(0));


}
*/



