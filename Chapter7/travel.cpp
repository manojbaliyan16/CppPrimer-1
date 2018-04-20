#include <iostream>


struct trave_time
{
	int hour;
	int minute;
	
};


const int min_per_hour = 60 ;
trave_time sum(trave_time t1, trave_time t2);
void show_time(trave_time t);

int main(){

using namespace std;

trave_time day1 = {5,45};
trave_time day2 ={5,50};
trave_time t3 = sum(day1,day2);
cout << "two day Total" ;
show_time(t3);

	return 0;
}


trave_time sum(trave_time t1, trave_time t2){


	trave_time total;
	total.minutes =(t1.minute + t2.minute) % min_per_hour ;
	total.hour = t1.hour+t2.hour+(t1.minute+t2.minute)/min_per_hour;

	return total;
}


void show_time(trave_time t){

	using namespace std;


	cout << t.hour << "hours  "  << t.minute << "minutes" <<endl;
}