#include "Main_System.h"
#include<bits/stdc++.h>

using namespace std;

int main(){

    Main_System* main = new Main_System();
    Reader* reader1 = new Reader();
    main->set_reader(reader1);
    Reader* reader2 = new Reader();
    main->set_reader(reader2);
    Reader* reader3 = new Reader();
    main->set_reader(reader3);
    Reader* reader4 = new Reader();
    main->set_reader(reader4);
    Reader* reader5 = new Reader();
    main->set_reader(reader5);
    Reader* reader6 = new Reader();
    main->set_reader(reader6);
    Reader* reader7 = new Reader();
    main->set_reader(reader7);
    Reader* reader8 = new Reader();
    main->set_reader(reader8);

    //---------------------------------

    for (int i=0; i<8; i++){
        printf("%d\n",main->get_availableSeats(i));
    }





}

