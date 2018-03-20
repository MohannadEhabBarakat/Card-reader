#ifndef ENTER_H
#define ENTER_H

#include "Action.h"

class Enter : public Action // inherited class from the action class
{
    public:
        Enter(Card*c, Reader*r); // constructor that takes two objects a card and a card reader
        bool T_Action(); // to process entering a classroom .. implementation of the pure virtual method
        virtual ~Enter(); // destructor



};

#endif // ENTER_H
