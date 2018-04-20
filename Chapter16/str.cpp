#include <iostream>
#include <string>
using namespace std;

int main(){

    string empty;
    string small="bit";
    string larger="Elephants are the girls best friend";

    std::cout <<"Size"<<endl;


    cout <<"\tempty:: " << empty.size()<<endl;
    cout << "\tempty:: " << small.size()<<endl;
    cout << "\tempty:: " << larger.size()<<endl;


    cout << "Capacities "<<endl;

    cout << "\tempty::" << empty.capacity()<<endl;
    cout << "\tempty::"<<small.capacity()<<endl;
    cout <<"\tempty::"<<larger.capacity()<<endl;
    empty.reserve(50);
    cout << "capacity after empty.reserve(50)"<<endl;

    cout << empty.capacity()<<endl;


    cout << empty.size()<<endl;

    
    return 0;
}