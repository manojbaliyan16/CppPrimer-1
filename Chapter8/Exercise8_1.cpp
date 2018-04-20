#include <iostream>
#include <string>

using namespace std;
   void functionStr(string *str, int n=0)
   {
   		cout << "Stirng is " << *str <<endl;
   }


   int main(){
string str="Waiting for AMazon parcel";

functionStr(&str);
return 0;

   }