#include <iostream>
using namespace std;
int main(){
cout << "Enter a positive digit" << endl;
cout << "Factorial of: " << endl;

int n;
cin >> n;
int factorial = 1;
int i= 1;
while (i<=n){

factorial *= i;
i++;
}
cout << factorial << endl;
return 0;
}