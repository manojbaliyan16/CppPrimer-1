
#include <iostream>


using namespace std;

const int min_per_hour = 60;
struct interval{
	
	int hours;
	int mins;
};

interval trip_sum(interval t1, interval t2){

	interval Total_time;
	Total_time.mins = (t1.mins + t2.mins)%min_per_hour;

	Total_time.hours = t1.hours + t2.hours + (t1.mins + t2.mins)/min_per_hour;
	return Total_time;

}
void show_trip(interval trip){

	cout << "Total Time " << trip.hours << "Hours " << trip.mins << "Mins" <<endl; 


}

int main(){

	interval day1 ={5,45};
	interval day2 = {8,50};


	interval time= trip_sum(day1, day2);
	cout << "Two Day Total" <<endl;

	show_trip(time);

	return 0;
}


