// Fibonacci series
#include <iostream>
using namespace std;
int main(){
int n,m;
cout << "Number of column  = " ;
cin >> n;
cout << "Number of row = " ;
cin >> m;
for (int j = 1; j<=m; j++){
for(int i=1; i<=n; i++){
cout <<"*";

}
cout <<  endl;
}
return 0;
}