#include <iostream>

using namespace std;

/*
 * 
 * 
 *There’s a
standard C/C++ technique for avoiding multiple inclusions of header files. It’s based on the
preprocessor #ifndef (for if not defined) directive. A code segment like the following
means “process the statements between the #ifndef and #endif only if the name
COORDIN_H_ has not been defined previously by the preprocessor #define directive”:
#ifndef COORDIN_H_
...
#endif

There is a technique to avaoid multiple inclusion of the header file it is based on the preprocessor "ifndef" directive

**********************Storage, Duration, Scope and Linkage***************************************************************


Automatic Storage Duration::::::

Varaible inside the block or inside the function Cretaed in the mmeory when exectuion start of that function and finish when execution of 
that function end 
C++ has two types of Automatic storage duration varaible 


(1) Static Storage duration : Varaible declared outside the function or else where in the program by using the keyword static have static
storage duration and they persits for the entire duration of the c++ program running g



c++ has three types of static storage duration varaibles :

(i)  Thread Storage Duration:  
varaible declared with thread_local have storage that persist for as long as the containing thread lasts


***********************************In c++ 11 Keyword auto**************************  

In c++ 11 we can initialize the auto varaible with the any expression 
Program does not need any special tools to manage these varaibles like stack but instead of this compiler allocates a fixed amount of memory 
to holds all the static varaibles 

and these varaibles stay presents as long as program executes 

int * pi = new int; // invokes new(sizeof(int))
int * p2 = new(buffer) int; // invokes new(sizeof(int), buffer)
int * p3 = new(buffer) int[40]; // invokes new(40*sizeof(int), buffer)   
 * 
 * 
*/