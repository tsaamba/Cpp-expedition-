#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int n;
cout << "Enter the size of array: " ;
cin >> n;
float arr[n];
cout << "Enter digits of array: " ;
for (int i=0; i<n; i++){
cin >> arr[i];}

float avg, sum;
for (int i=0; i<n; i++){
sum += arr[i];
avg = sum/n;}
cout << "The avg is: "<< avg << "\n" ;
float var= 0;
for (int i=0; i<n; i++){
var += ((arr[i]-avg)*(arr[i]-avg))/n ;}
cout << "The variance is: " << var << "\n";

float stdd = sqrt(var);
cout << "The standard deviation is: " << stdd;

return 0;
}