#include <iostream>
using namespace std;

void func(int *first, int *last, int value);



int main(){


	int arr[]={1,2,3,4,5};

	func(&arr[0], &arr[4],10);
	return 0;
}

void func(int *first, int *last, int value)
{
	while(first!=last){
		*first=value;
		cout << *first << endl;
		++first;
	}
}

