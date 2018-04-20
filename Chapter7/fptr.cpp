#include <iostream>


using namespace std;




double besty(int);

double pem(int);
void estimates(int lines, double (*pf)(int));

int main(){
int code ;



	cout << "How Many Lines of code do you need "<<endl;

	cin >> code ;

	cout << "here is the Besty Estimates " << endl;
	estimates(code,besty);

	cout << "Here is the Pem Estimates" << endl; 

	estimates(code,pem);
}


double besty(int lines){


	return 0.05*lines;
}


double pem(int lines){

	return 0.03*lines+0.0004*lines*lines;
}


void estimates(int lines, double (*pf) (int)){


		cout << lines << "Lines will take ";
		cout << (*pf)(lines) << "Hours " << endl;
}