#include "Leave.h"

Leave::Leave(Card*c, Reader*r):Action(c,r)
{

}

bool Leave::T_Action(){
    if(R->get_seats(C->get_Card_Num())==1){  //making sure that the seat is already taken to process leaving
        return R->set_seats(C->get_Card_Num(),0); // leaving the class .. making the seat index = 0  and return 1 if the process completed
}
    return false; // if the process failed
}


Leave::~Leave()
{

}

