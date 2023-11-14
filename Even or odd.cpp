#include <iostream>
using namespace std;
int main(){
int num;
cout << "Enter a integer" << endl;
cin>> num;
if((num % 2)==0){
cout << "The number entered is even." << endl;
}
else {
cout << "The number is odd" << endl;
}

return 0;
}