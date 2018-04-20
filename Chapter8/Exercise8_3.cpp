#include <iostream>
#include <cctype>
#include <string>

using namespace std;


void convertCase(string & str);


int main(){
	string astr;
	cout << "Enter a string (q to Quit):"<<endl;
while(getline(cin,astr) && astr!="q"){

	convertCase(astr);
	cout << astr << endl;
	cout << "Next string (q to quit)"<<endl;
}

	return 0;
}

void convertCase(string & str){

for(unsigned int i = 0; i < str.size();i++){

	str[i]=toupper(str[i]);
}


}


