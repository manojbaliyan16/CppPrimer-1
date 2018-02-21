

using namespace std;

using->directive-> This Using Directive make all names in namespace available 
<< -> operator Overloading -> Same OPerator having different meaning 

C also has some operator Overloading, & works as bitwise AND and Address of 
* Multiplication and Defrencing 

1. What are the modules of C++ programs called: -> Function 
2. #include <iostream>  what this preprocessor directive will do -> # include will include the text/function from the I/O stream 
3. using namespace std; here using directive will use the namespace std where some basic function of c++ is defined 
4. cout<<"Hello World"<<endl; 
5. int cheeses;
6. cheeses = 32;
7. cin >> cheeses ;
Chapter 3:


A short integer is  at least 16 bits wide.
An int integer is at least as big as short.
 A long integer is at least 32 bits wide and at least as big as int.
 A long long integer is at least 64 bits wide and at least as big as long.
 
 Symbolic Constants from climits:
Symbolic Constant                       Represents
CHAR_BIT                                 Number of bits in a char
CHAR_MAX 								 Maximum char value
CHAR_MIN                                 Minimum char value
SCHAR_MAX                                Maximum signed char value
SCHAR_MIN                                Minimum signed char value
UCHAR_MAX                                Maximum unsigned char value
SHRT_MAX                                 Maximum short value
SHRT_MIN                                 Minimum short value
USHRT_MAX                                Maximum unsigned short value
INT_MAX                                  Maximum int value
INT_MIN                                   Minimum int value
UINT_MAX                                     Maximum unsigned int value
LONG_MAX                                   Maximum long value
LONG_MIN                                  Minimum long value
ULONG_MAX                                 Maximum unsigned long value
LLONG_MAX                                Maximum long long value
LLONG_MIN                                 Minimum long long value
ULLONG_MAX                                  Maximum unsigned long long value
Symbolic Constants


CLIMITS header file defines the symbolic constant :

The CLIMITS header file define the symbolic constant to Represents type limits 

in c++ 11 we can initialize the variable like :
int eum_1 {7};


unsigned integer can't have negative value 

Character                     ASCII Symbol        C++ Code
Name

Newline NL (LF) 							      \n 
Horizontal tab HT 								  \t
Vertical tab VT \v                                \v
Backspace BS \b                                   \b 
Carriage return CR \r 					          \r
Alert BEL \a                                      \a
Backslash \ \\                                    \ \\
Question mark ? \?                                \ ?
Single quote ’ \'                                 \ '
Double quote  "                                  \"



c++ 11 Aray Initialization :


1. Drop th equal sign when initializin the data 


like : double earning[4] {1.24e,1.25e,1.26e,1.27e}
long array[10]={}// All ements set to zero

long array[]={1.25,1.26,1.28,1.29};//Not allowed 

//getline function reads a whole line 
getline and get reads the entire line however getline() discoards 
the new line character 

getline: getline() function conveniently gets a line at a time 
Its reads input through newline character through newline character marking the end of the line 


Line_-Oriented inut with get():

gets comes in various variant 1 is :
it reads the line up to the end of line 
but unlike to getline() rather then discards the new line char it reads the newline char as well 


When we use cin.get() with out any argument 
reads the single new char even it is a new line 

so when we have to use two cin.get(....)

then we can use at below fashiion 


cin.get(name,Arsize);
cin.get();
cin.get(dessert,Arsize)


Another way to use get() is to join or concatenate 


cin.get(name,Arsize).get();





structure :


struct inflatable {
	char name[20];
	float volume;
	double price;


};


// Initialization:
inflatable guest;
guest.name = "Kumar";


//in c++11


inflatable duck{"Daphne", 0.12,9.98};


c++ structure have member function in adition to the varaible 


array of structure :


inflatable gifts[100];


Initialization array of structure :


inflatable guests [2] = {
		{"ABC", 0.5, 21.99};
		{"GodZilla", 2000, 565.99};
};


// Bit Filed in structure :

struct torgle_register
{
unsigned int SN : 4; // 4 bits for SN value: Only 4 bit will be used of varaible SN
unsigned int : 4; // 4 bits unused
bool goodIn : 1; // valid input (1 bit)
bool goodTorgle : 1; // successful torgling
};




// Enumeration in C++: provides the alternative of const for creating symbolic constant :



enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};

Two Things :

1. spectrum the name of two types : 
2. red, orange, yellow etc   are the symbolic constant for integer ranging from 0-7;

We can use the enum name to declare a variable of its type 
but we can assign only value which we have used in declaring the enum 
spectrum band;
band = blue; //valid 
band =2000; // invalid 


only assignment operator is defind for the enumeration 

Enumerator by defualt is of int type but we can't convert int to Enumartor type 


so 
int color = blue ; // valid spectrum type promoted to int
blue = 3 ; // Invalid as int not promoted to spectrum type 


Setting Enumerator Values:
enum bits{one = 1, two = 2, four = 4, eight = 8};

the assigned value must be integer

enum bigstep{first, second = 100, third}

you can create more than one enumerator with the same value:

enum {zero, null = 0, one, numero_uno = 1};



// Pointer:
Pointer Golden Rule: Always initialize a pointer to a definite and appropriate address before you apply the dereferencing operator (*) to it.



// new operator 

int *ptr = new int ;

int higgens;
int *pn = &higgens; 

in both of the case we are assiging the address of an int to the pointer 
In 2nd case we can access int by Name like higgens; 

but in 2nd case you can only access via poniter but in first case it can b e access only by pointer 


The general form for obtaining and assigning memory for a single data object, which
can be a structure as well as a fundamental type, is this:
typeName * pointer_name = new typeName;


int * ptr = new int; 

// Creating a Dynamic Array with new


int * psome = new int [10];

delete [] psome;


int *pt = new int ;

short *ps = new short [100];

delete [] pt // effect is undefined 

delete ps // effect is also undefined so also don't do it 



// Pointer Arithmatic 


int tacos[10] = {5,2,8,4,1,2,2,4,6,8};
int * pt = tacos; // suppose pf and tacos are the address 3000

pt = pt + 1; // now pt is 3004 if a int is 4 bytes

int *pe = &tacos[9]; // pe is 3036 if an int is 4 bytes

pe = pe - 1; // now pe is 3032, the address of tacos[8]

int diff = pe - pt; // diff is 7, the separation between
// tacos[8] and tacos[1] 


// vector 

C++98 STL
vector<double> a2(4);

C++11 -- create and initialize array object
array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
array<double, 4> a4;
a4 = a3; // valid for array objects of same size



// Static Binding and Dynamic Binding for an Array :


int arr[10] // static Binding size is fixed at compile time 

int size ;
cin >> size;

int *arr = new int[size]; // dynamic binding; Size is fxed at run time


delet [] arr ; 



// Example :


struct things {


	int good;
	int bad;
};


things struct1={3,100};

things *pt = &struct1;


cout << struct1.good ;  -> 3
cout << struct1.bad ; -> 100


cout << pt->good; ->3;



// Chapter 5 : Loop 


C++11 Range Based For Loop :



	double prices[5]={4.99,1.98,5.96,3.25,4.12};

	for (double x:prices){
		cout << x << std::endl;
	}

	// Here x represents the first Number of prices after displaying the First Element it goes for 2nd and 3rd and soonnn...



	// This loop will print the every value in the range of the array


	If you want to Modify array Values in that case you want 


	for(double &x:price){
		x=x*0.80;

	}

	The Range based for loop can be used for the Initialization:


	for(int x:{3,2,5,6})
		cout << x << "";




	