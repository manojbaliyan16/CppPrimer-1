// Function with array Object in c++11

#include <iostream>
#include <string>
#include <array>
using namespace std;


const int season =4; 

const array(string, season) Snames = {"Spring", "Summer", "Fall", "Winter"};


// function that will modify the array Object:


void fill(array<double,season> *pa);
//function That uses array Object Without Modufying it 

void show(array<double,season> da);



int main(){
array<double,season> Expenses;

fill(&Expenses);
show(Expenses);

	return 0;
}
void fill(array<double,season> *pa){
	for(int i =0 ; i < season ;i++){
		cout << "Enter " << season[i] << "Expenses" ;
		cin >> (*pa) [i];
	}
}


void show(array<double,season> da){

	double total=o.0;
	for(int i=0 ; i < season ; i ++){
		cout << Snames[i]  << ":$" << da[i] <<endl;
		total +=da[i];
	}

	cout << "TOTAL expenses : $" << total << endl;

	total += da[i];
}