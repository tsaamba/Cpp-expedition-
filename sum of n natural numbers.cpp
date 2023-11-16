#include <iostream>
using namespace std;
int main(){
cout << "Enter a positive integer" << endl;
int a;
int sum =0;
cin >> a;
int i = 1;
while ( i<=a){
sum += i;
i++;

}
cout << sum<< endl;
return 0;
}