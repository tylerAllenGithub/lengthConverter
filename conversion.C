/*Tyler Allen
CS111
Lab4-1
2-10-15

This program will output the length expressed in yards, feet, and inches in that order.*/

#include <iostream>
using namespace std;

int main(){//main function
  double lengthCentimeters;
  double lengthInches;
  int roundedLengthInches;
  int yards;
  int feet;
 //declare variables
  cout<<"****************************************************************************"<<endl;
  cout<<"This program will convert a length in centimeters to yards, feet, ";
  cout<<"and inches."<<endl;
  cout<<"****************************************************************************"<<endl;
  cout<<endl;

  cout<<"Please enter a length in centimeters: ";//ask for age input
  cin>> lengthCentimeters;//assign input to age

  lengthInches = lengthCentimeters/2.54;//assign length in inches to length in centimeters/2.5
  roundedLengthInches = lengthInches+0.5;//round length in inches
  cout<<lengthCentimeters<<" cm is about "<<lengthInches<<" rounded to ";
  cout<<roundedLengthInches<<" inches." <<endl;//

  yards = roundedLengthInches/36;
  cout<<roundedLengthInches<<" inches = " <<yards<<" yards, ";
  roundedLengthInches= roundedLengthInches%36;
  feet = roundedLengthInches/12;
  roundedLengthInches=roundedLengthInches%12;

  cout<<feet<<" feet, and "<<roundedLengthInches<<" inches."<<endl<<endl;
  cout<<"Thank you for using the program. Good bye.";

 return 0;
}
