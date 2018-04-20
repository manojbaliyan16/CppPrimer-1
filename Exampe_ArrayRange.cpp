//ArrayRange.cpp
#include <iostream>

using namespace std;
const int Arr_size =8;

int sum_arr(const int *begin, const int *end);


int main(){
int cookies[Arr_size]={1,2,4,8,16,32,64,128};


int sum = sum_arr(cookies,cookies+Arr_size);


cout <<"Total ECookies Eaten " << sum <<endl;


	sum =sum_arr(cookies, cookies+3);

cout <<"First Three person Eaten " << sum <<endl;
	return 0;
}

int sum_arr(const int *begin, int const *end){


	const int *ptr;
	int Total =0;
	for(pt=begin;pt!=end;pt++){


		Total=Total+*pt;
	}

	return total ;
}



