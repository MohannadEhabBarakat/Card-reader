#ifndef LEAVE_H
#define LEAVE_H

#include "Action.h"

class Leave : public Action
{
    public:
        Leave(Card*, Reader*); // constructor
        bool T_Action(); // leaving a classroom .. implementation of the pure virtual method
        virtual ~Leave(); // destructor


};

#endif // LEAVE_H
