#include <iostream>

using namespace std;


double func(double arr[], int size);



int main(){
	double arr[]={1.23,1.35,1.48,9.36,78.25};
	cout << "The largest value in to the array is"<<endl;
	double value= func(arr,5);
	cout << value <<endl;


	return 0;
}


double func(double arr[], int size){

	double max=0.0;

	for(int i =0 ; i < size ; i++)
		if(max <  arr[i]){
			max = arr[i];
		}
		return max;
}