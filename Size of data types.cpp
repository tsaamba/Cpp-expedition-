#include <iostream>
using namespace std;
int main(){
int a = 4;
float b = 5.7576;
char d = 'n';
double c = 6.97532257878;
cout << "Size of integer in bytes is: "<< sizeof(a)<< endl;
cout << "Size of float in bytes is: "<< sizeof(b)<< endl;
cout << "Size of char in byte is: "<< sizeof(d)<< endl;
cout << "Size of double in bytes is: "<< sizeof(c)<< endl;
return 0;
}