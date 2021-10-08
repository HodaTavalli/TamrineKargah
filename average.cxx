#include <iostream>
using namespace std;
int main()
{
 float y,j,o,average;
 char a[100], b[100];

 cout << "please enter your name:";
  cin >> a;
  cout << "please enter your last name:";
  cin >> b;
  system("cls");
  cout << "now enter your 3 score: ";
  cin >>y>>j>>o;
  average = (y+j+o) / 3;
  if (average>=17)
  {
   cout << "great";
  }
  else if (17>average && average>=12)
  {
   cout << "normal";
  }
  else if(average<12)
  { 
   cout << "fail";
  }
  return 0;
}