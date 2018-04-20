/* 
Template:
template <template anyType>

void swap(TypeName &a, anyType &b){
	
	anyType temp;
	temp =a;
	a=b;
	b= temp;
}

Before c++98 typeName was added to but after this typeName was replaced by className

template <class, AnyType>

*/
#include <iostream>
using namespace std;

template <typename T> // or class T
void Swap(T &a, T &b);
int main()
{
using namespace std;
int i = 10;
int j = 20;
cout << "i, j = " << i << ", " << j << ".\n";
cout << "Using compiler-generated int swapper:\n";
Swap(i,j); // generates void Swap(int &, int &)
cout << "Now i, j = " << i << ", " << j << ".\n";
double x = 24.5;
double y = 81.7;
cout << "x, y = " << x << ", " << y << ".\n";
cout << "Using compiler-generated double swapper:\n";
Swap(x,y); // generates void Swap(double &, double &)
cout << "Now x, y = " << x << ", " << y << ".\n";
// cin.get();
return 0;
}

template <typename T> // or class T
void Swap(T &a, T &b)
{
T temp; // temp a variable of type T
temp = a;
a = b;
b = temp;
}