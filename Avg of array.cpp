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
    float sum = 0;
    float avg = 0;
    for(int i = 0; i<n; i++)
    {
    
    sum += marks[i];
    avg = sum/ n;
    
    }
    cout << "The avg of digits of array is: " ;
    cout << avg << endl;
    return 0;
}