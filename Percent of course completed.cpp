// The below written code which I commented out is direct, now I have written a new code which take input directly and then process out further.


/*#include <iostream>
using namespace std;
int main(){
  float attended= 4;
  float total_classes = 74;
  cout<<"percentage of classes attended is :" <<(attended/total_classes)*100;
  return 0;
} */



#include <iostream>
using namespace std;
int main(){
float class_attended, total_class;
cout<<"Enter the number of class attended: ";
cin>>class_attended;
cout<<"Enter the total number of class: ";
cin>>total_class;
cout<<"Percent of course completed is: " <<(class_attended/total_class)*100;
return 0;
}

// the above code takes user input and calculate percentage of course completed.