/*Tyler Allen
CS111
3-19-15
This program will prompt the user to input a length in centimeters. The program will then convert the centimeters to inches and output the length expressed in yards, feet, and inches*/

#include <iostream>
using namespace std;

void showProgInfo();
int getLengthCM();
int convertCMtoInch(int lengthCentimeters);
void convertToYdFtIn(int &roundedLengthInches, int &feet, int &yards);
void showResult(int initialLengthInches, int lengthCentimeters, int roundedLengthInches, int feet, int yards);

int main(){
  int lengthCentimeters;
  int roundedLengthInches;
  int initialLengthInches;
  int feet;
  int yards;

  showProgInfo();
  lengthCentimeters=getLengthCM();
  roundedLengthInches=convertCMtoInch(lengthCentimeters);
  initialLengthInches=roundedLengthInches;
  convertToYdFtIn(roundedLengthInches, feet, yards);
  showResult(initialLengthInches, lengthCentimeters, roundedLengthInches, feet, yards);

  return 0;
}

void showProgInfo()
{
  cout<<"**********************************************************************\
*******"<<endl;
  cout<<"This program will convert a length in centimeters to yards, feet, ";
  cout<<"and inches."<<endl;
  cout<<"***********************************************************************\
******"<<endl<<endl;
}

int getLengthCM()
{
  int lengthCentimeters;
  int lengthInches;
  cout<<"Please enter a length in centimeters: ";//ask for age input
  cin>> lengthCentimeters;//assign input to age
  return lengthCentimeters;
}
int convertCMtoInch(int lengthCentimeters)
{
  int lengthInches;
  int roundedLengthInches;
  lengthInches = lengthCentimeters/2.54+.5;
  roundedLengthInches = lengthInches;//round length in inches
  return roundedLengthInches;
}

void convertToYdFtIn(int &roundedLengthInches, int &feet, int &yards)
{
 yards = roundedLengthInches/36;
 roundedLengthInches= roundedLengthInches%36;
 feet = roundedLengthInches/12;
 roundedLengthInches=roundedLengthInches%12;

}
void showResult( int initialLengthInches, int lengthCentimeters, int roundedLengthInches, int feet, int yards) 
{
  cout<<initialLengthInches<<" inches = "<<yards<<" yards, "<<feet<<" feet, and "<<roundedLengthInches<<" inches"<<endl;
}
