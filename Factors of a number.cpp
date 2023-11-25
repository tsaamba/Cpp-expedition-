#include <iostream>
using namespace std;
int main(){
// Displaying factor of the user entered number.

int y;
cout << "Enter a number : " ;
cin >>  y;
cout << "The factor of the given number are: " ;
for(int i= 1; i<= y ; ++i){


if ((y%i) ==0){
cout << i << ", " ;
}
}


return 0;
}
    