/*
main use of reference is to formal argument to a function 

If we use reference as an argument then function works with the original data not the copy the data 

**********Creating A refeence varaible**********


int rats;
int &rodents =rats;//make rodents as an alias for rats

& means reference to int 


int rats =101;
int &rodent = rats;

int * prats =&rats;

*************Diff Between Pointer and refrence********

1. refrence varaible should be initialize when it is declare 
2. But Pointer can be declare first and value to the pointer variable assign later on 

int rat;
int & rodent = rat// ok 

// A ref is like like a const pointer 

int & rodents = rats ;
 it is something like this 
 int *const pr = &rats;

 refe Rodenst plays the ame role as *pr
 */

#include <iostream>

using namespace std;


int main(){

int rats = 101;

int &rodents = rats;

cout << "Rats =" << rats << endl;
cout << "rodents = " << rodents << endl;
int bunnies =50;
rodents= bunnies; // can we change the ref Ans No 
cout << "Bunnies = " << bunnies <<endl;
cout << "rats== " << rats << endl;
cout << "rodents == " << rodents << endl;


cout << " Bunnies adress == " << &bunnies << endl;
cout << "Rodents Addrss == " << &rodents  << endl;

 

	return 0;
}