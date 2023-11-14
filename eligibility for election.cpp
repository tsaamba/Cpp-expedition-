#include <iostream>
using namespace std;
int main(){
int age;
cout<<"Please enter your age: ";
cin>> age;
if((age<18)&& (age>0)){
cout<<"You are not eligible to vote.";}
else if (age<0){
cout<<"Gadhe, get out of your mother's womb first";
}
else {
cout<<"You are eligible to vote, you are a part of the greatest democracy";}
return 0;
}