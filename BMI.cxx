#include <iostream>
using namespace std;
int main()
{
    
 float y,j,o;

 cout << "please enter your weight: ";
 cin >> y;
 cout <<"please enter your height in meters: ";
 cin >> j;
 cout << endl;
 o = y / (j * j);
 if (o<18.5)
 {
  cout << "your are underweight: ";
 }
 else if(18.5<o && o<24.9)
 {
  cout << "you are normal";
 }
 else if (25 < o && o < 29.9)
 {
  cout << "you are over weight";
 }
 else if(30<o && o<34.9)
 { 
  cout << "you are obese";
 }
 else if(35<o)
 { 
  cout << "you are extremly obese";
 }
 
 return 0;
}