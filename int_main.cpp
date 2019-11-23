#include "Main_System.h"
#include <stdio.h>

using namespace std;

int main(){
   Main_System *system=new Main_System();

   for (unsigned char i= 0; i<255; i++){ // creating 256 card with different IDs
	Card *c=new Card(i);
	system->set_card(c);
   }

	Card *c=new Card (255);
	system->set_card(c);

   for (unsigned char i= 0; i<8; i++){ // creating 8 reader each for one classroom
	Reader *r=new Reader(i);
	system->set_reader(r);
   }
 

 

	system->reserve(255,0);

	system->reserve(2,0);

	system->reserve(1,1);

	system->reserve(0,2);

	system->reserve(8,5);



	printf("%d\n",system->get_availableSeats(0));
	printf("%d\n",system->get_usedSeats(0));
	printf("%d\n",system->Location_of(8));

	system->avail(0,2);
	printf("%d\n",system->get_usedSeats(2));





}







