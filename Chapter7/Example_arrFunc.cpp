// Function with argument as Array

#include <iostream>
using namespace std;
const int size=8;

int sumArr(int arr[], int n);



int main(){

	int cookies[size]={1,2,4,8,16,32,64,128};

	int sum=sumArr(cookies,size);

	cout << "Total Cookies eaten :: " << sum <<endl;
 
	return 0;
}


int sumArr(int arr[], int n){

	int total =0;
	for(int i=0;i<n;i++){
		total =total+arr[i];
	}

	return total;
}



