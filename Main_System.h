#ifndef MAIN_SYSTEM_H
#define MAIN_SYSTEM_H
#include "Reader.h"
#include "Enter.h"
#include "Leave.h"
#include "Card.h"

class Main_System   // this is the main class that combine all the classes.. only one object should be created
{
    public:
        Main_System(); // constructor
        bool set_reader(Reader*); // function to add card readers to the list of readers that should contain only 8 of them
        short int get_availableSeats(unsigned char); // function to count the number of available seats on a specific classroom
        short int get_usedSeats(unsigned char); // function to count the number of used seats
        unsigned char Location_of(unsigned char); // function to get the location of any student passing his id that ranged from 0-225
        bool if_occupied(unsigned char, unsigned char); // function to check if a specific seat is used or not passing the number of the owner student
        void reserve(Card*,unsigned char); // function to reserve seat when entering any classroom
        void avail (Card*,unsigned char); // function to avail seat when leaving the classroom


        virtual ~Main_System(); // destructor

    private:
        Reader* L_R [8]={nullptr}; //list of readers
};

#endif // MAIN_SYSTEM_H
