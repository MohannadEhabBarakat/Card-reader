#ifndef CARD_H
#define CARD_H


class Card
{
    public:
        Card(unsigned char); //constructor
        void set_Card_Num(unsigned char); // setting new card that takes a number ranged from 0-255
        unsigned char get_Card_Num(); // to get the card number outside the class as it's private here
        virtual ~Card(); // virtual destructor

    private:
        unsigned char Card_Num; // card number

};

#endif // CARD_H
