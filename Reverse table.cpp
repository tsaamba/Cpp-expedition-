#include <iostream>
using namespace std;
int main(){
int n;
cout << "Enter a number of which you want the table to be printed :  " ;
cin>>n;
for(int i =10; i>=1; i--){
cout << n <<"*"<< i << "="<< n*i<< endl;
}
return 0;
}