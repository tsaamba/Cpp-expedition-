#include<iostream>
using namespace std;

int main()
{ 
     int n;
     cout << "Enter a size of array: ";
     cin >> n;
    int arr [n];
    cout << "Enter digits of array: " ;
    for(int i=0;i<n;i++)
    {
    cin >> arr[i];
    }
    int m = arr[0];
    for(int i = 0; i<n; i++)
    {
    if(m> arr[i])
    m = arr[i];
    
    
    }
    cout << "The smallest of digits of array is: " ;
    cout << m << endl;
    return 0;
}