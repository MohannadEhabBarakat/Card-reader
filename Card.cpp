#include "Card.h"


//Card::Card()=default;

Card::Card(unsigned char num)
{
  Card_Num=num;
}

void Card::set_Card_Num(unsigned char x){ // assigning a card number
    Card_Num=x;
}

unsigned char Card::get_Card_Num(){return Card_Num;} // returning this card number
Card::~Card(){}

