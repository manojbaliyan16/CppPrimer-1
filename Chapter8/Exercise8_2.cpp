#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	char* brand;
	double wieght;
	int NoOfCallories;
};

void setValues(CandyBar&, char* brand="Millennium Munch", double wieght=2.85, int NoOfCallories=350);																		
void printCandyBar(const CandyBar&);



int main(){


	CandyBar candy;

	cout<<"Set and Show Defualt values "<<endl;
	setValues(candy);
	printCandyBar(candy);

	cout << "Set nand Show non Default Values:"<< endl;

	setValues(candy,"Cad Burry",3.85,450);
	printCandyBar(candy);

	return 0;
}


void setValues(CandyBar & candy, char* brand, double wieght, int NoOfCallories){
	candy.brand=brand;
	candy.wieght=wieght;
	candy.NoOfCallories=NoOfCallories;

}

void printCandyBar(const CandyBar & candy){

	cout << "brand :: =" << candy.brand << endl;
	cout << "wieght::==" << candy.wieght <<endl;
	cout << "NoOfCallories:=="<<candy.NoOfCallories <<endl;



}

