#include <iostream>
using namespace std;
int main(){
// HCf
int hcf, x;
int y;
cout << "Enter two numbers : " << endl;
cin >> x>> y;

for(int i= 1; i<= y ; ++i){


if (((x%i)==0) && ((y%i) ==0)){
 hcf = i;
}
}
cout << hcf << endl;

return 0;
}
    