#include <iostream>
using namespace std;
int main(){
int a,b;
cout << "Enter two integer,so before swapping: " ;
cin>>a>>b;
int c;
c= a;// Now 'a' becomes empty so we can store 'b' in it
a=b;//container becomes empty once assigned a different container.
b=c;
cout << "After swapping: " << a << " " << b ;
return 0;
}
    