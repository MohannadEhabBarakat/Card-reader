#ifndef ACTION_H
#define ACTION_H

#include "Card.h"
#include "Reader.h"

class Action // this class will inherit 2 other classed one for checking in a classroom and the other for getting out
{
    public:
        Action(Card* , Reader*); // the action will be done on a specific card on a specific card reader
        virtual bool T_Action()=0; // pure virtual method to be implemented on the inherited classes
        virtual ~Action();  // virtual constructor to avoid mistakes during inheritance

    protected:
        Card*C;
        Reader*R;
};

#endif // ACTION_H
