#include <iostream>
using namespace std;
int main(){
int a,b;
cout << "Enter two integer: " ;
cin>>a>>b;
cout << "Before swapping: " <<a<<","<<b << endl;
a = a+b;
b= a-b;
a = a-b;
cout << "After swapping: " << a << "," << b ;
return 0;
}
    