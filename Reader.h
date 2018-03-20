#ifndef READER_H
#define READER_H


class Reader // 8 objects will e created from this class to represent the 8 card readers for the classrooms
{
    public:
        Reader();
        Reader(unsigned char); // constructor of the card reader
        short int NumOf_available(); // function to count the number of available seats in a specific classroom
        short int NumOf_used(); // function to count the used seats in a specific class
        bool set_seats(unsigned char,bool);
        bool get_seats(unsigned char);

        ~Reader();

    private:
        unsigned char serial; // serial number of the card reader
        bool seats[256]={0}; // array of bool to put all the seats .. if the index has a value of 1 then the seat is available otherwise it;s used.

};

#endif // READER_H
