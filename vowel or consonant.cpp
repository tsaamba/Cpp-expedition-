// checking vowel
#include <iostream>
using namespace std;
int main (){
char letter;
cout << "Enter a letter to check whether it is a vowel: " ;
cin>>letter;
if ((letter=='a')||(letter=='e')||(letter=='o')||(letter=='i')
||(letter=='u')){
cout << "it is a vowel" << endl;}
else{

cout << "it is consonant" << endl;}
return 0;
}