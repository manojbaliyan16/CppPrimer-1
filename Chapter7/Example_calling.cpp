// Defing Prototyping and Calling a function

#include <iostream>


void swap(int,int);//prototype

int main(){

using namespace std;
	int x,y;

	cout << "Enter The Value of X & y"<<endl;
	cin>>x;
	cin>>y;

	swap(x,y); //calling to function

cout << "Value of X==" << x << std::endl;
std::cout << "Value of y==" << y << std::endl;
}

void swap(int x,int y){  // Defination of function
	int t;

	t=x;
	x=y;
	y=t;

std::cout << "Value of X==" << x << std::endl;
std::cout << "Value of y==" << y << std::endl;
}
