#include "Reader.h"

Reader::Reader()=default;
Reader::Reader(unsigned char s)
{
    serial=s;

}

bool Reader::set_seats(unsigned char x, bool i) // changing the index of the seats array by 0 or 1 depending on the process (leaving or entering)
{
    if(x<256){ // to avoid entering invalid card numbers
        seats[x]=i; // changing the seat status
        return (1==1); // return true if the process completed
    }
    return 0; // if the process failed return false
}

bool Reader::get_seats(unsigned char x) // returning the status of the seats taking its number
{
    if(x<256){ // to avoid entering invalid number
        return seats[x];} // returning the status of the seat 0 if empty 1 if taken
    return 0;
}

short int Reader::NumOf_used(){ // returning the number of taken seats
    short int x=0;
    for(short int i=0; i<256; i++){ // looping on the array of seats
        if(seats[i]==1){x++;} // counting the taken seats that have the value of 1
    }
    return x; //returning the number of seats
}

short int  Reader::NumOf_available(){ // number of empty seats
    return 256-NumOf_used(); //
}

Reader::~Reader(){}

