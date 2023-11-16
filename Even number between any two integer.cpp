#include <iostream>
using namespace std;
int main(){
int a,b;
cout << "Enter the from which you want even numbers: " ;
cin >> a;
cout << "Enter the number  till which you want even numbers: " ;
cin>> b;
int i;
for (int i = a; i<=b; i++){
if(i%2==0){
cout << i << endl;
}

}

return 0;
}
