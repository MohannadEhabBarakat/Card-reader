#include "Enter.h"

Enter::Enter(Card*c, Reader*r):Action(c,r)
{

}
bool Enter::T_Action(){
    if(R->get_seats(C->get_Card_Num())==0){ // making sure that the seat is available
        return R->set_seats(C->get_Card_Num(),1);} // entering the class .. making the seat index = 1  and return 1 if the process completed
    return false; // if the process failed
}

Enter::~Enter(){}


