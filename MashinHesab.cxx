#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
 double e , f ;
  string input;

 cout << "please input your number : ";
 cin >>e ;

 system("cls");
 cout << "choose your amounts: " << " \n zarb \n taqsim \n  radical \n  sin \n  cos \n  cot \n  tan \n  factorial :";

 cin>> input;
 if (input == "taqsim" || input == "zarb")
 {
  cout << "please input your second number: ";
  cin >> f;
 }
 if (input == "taqsim")
 {
  if (f == 0)
   cout << "taqsim";
  else
   cout << "your result : " << e / f;
 }
 if (input == "zarb")
 {
  cout << "your result: " << e * f;
 }
 if (input == "radical")
 {
  cout << "your result: " << sqrt(e);
 }
 if (input == "sin")
 {
  cout << "your result: " << sin((e * 3.14) / 180);
 }
 if (input == "cos")
 {
  cout << "your result: " << cos((e * 3.14) / 180);
 }
 if (input == "tan")
 {
  cout << "your result: " << tan((e * 3.14) / 180);
 }
 if (input == "cot")
 {
  cout << "your result: " << 1 / tan((e * 3.14) / 180);
 }
 if (input == "factorial")
 {
  double factorial = 1;
  for (int i = 1; i <= e; i++)
   factorial = factorial * i;
  cout << "your result: " << factorial;
 }
}}