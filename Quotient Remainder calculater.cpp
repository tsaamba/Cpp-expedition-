#include <iostream>
using namespace std;
int main(){
int dividend, divisor;
cout << "Enter Dividend" << endl;
cin>> dividend;
cout << "Enter Divisor" << endl;
cin >> divisor;
cout << "The remainder is " << dividend%divisor << " and the quotient is "<< dividend/divisor << endl;
return 0;
}