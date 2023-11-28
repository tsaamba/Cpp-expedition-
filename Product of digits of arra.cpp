#include<iostream>
using namespace std;

int main()
{ 
     int n;
     cout << "Enter a size of array: ";
     cin >> n;
    int marks [n];
    cout << "Enter digits of array: " ;
    for(int i=0;i<n;i++)
    {
    cin >> marks[i];
    }
    int product= 1;
    for(int i = 0; i<n; i++)
    {
    
    product *= marks[i];
    
    }
    cout << "The product of digits of array is: " ;
    cout << product << endl;
    return 0;
}