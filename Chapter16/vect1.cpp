#include <vector>
#include <string>
#include <iostream>

const int NUM = 5;

int main(){

using namespace std;


vector<int> rating(NUM);
vector<string> titles(NUM);

cout<<"You Enter only what you tell about to enter :: " << NUM << "Book Titles and rating" <<endl;


for (int i = 0; i < NUM; ++i)
{
	
	cout <<"Enter the titles" <<endl;
	
	getline(cin,titles[i]);

	cout<<"Enter your rating (1-10)"<<endl;
	cin >> rating[i];
	cin.get();
}
cout << "Thank You, You Entered the following Rating"<<endl;
for (int i = 0; i < NUM; ++i)
{
	cout<< rating[i]<< "\t" << titles[i] << endl;
}

	return 0;
}
/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int NUM = 5;
int main()
{

vector<int> ratings(NUM);
vector<string> titles(NUM);
cout << "You will do exactly as told. You will enter\n"
<< NUM << " book titles and your ratings (0-10).\n";
int i;
for (i = 0; i < NUM; i++)
{
cout << "Enter title #" << i + 1 << ": ";
getline(cin,titles[i]);
cout << "Enter your rating (0-10): ";
cin >> ratings[i];
cin.get();
}
cout << "Thank you. You entered the following:\n"
<< "Rating\tBook\n";
for (i = 0; i < NUM; i++)
{
cout << ratings[i] << "\t" << titles[i] << endl;
}
return 0;
}*/