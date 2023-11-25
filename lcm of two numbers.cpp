#include <iostream>
using namespace std;
int main(){
// LCM
int hcf, x;
int lcm, y;
cout << "Enter two numbers : " ;
cin >> x>> y;

for(int i= 1; i<= y ; ++i){


if (((x%i)==0) && ((y%i) ==0)){
 hcf = i;
}
}
lcm= (x * y)/hcf;
cout << "The lcm of two numbers is: "<< lcm  << endl;

return 0;
}
    