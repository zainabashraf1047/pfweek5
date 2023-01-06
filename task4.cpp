#include<iostream>
using namespace std;
string even(int number);
main()
{
  int number;
  string results = even(number);
  cout << results;
  
}
string even(int number)
{
 
  cout <<"Enter 5 digit number :";
  cin >> number;
  int q1 = number / 10000;
  int r1 = number % 10000;
  int q2 = r1 / 100;
  int r2 = r1 % 100;
  int result = q1 + q2 + r2;
  int mod = result % 2;
  
  string odd = "Oddish";
  string even = "Evenish";
  if(mod == 1)
  {
    return odd;
  }
  if(mod == 2)
  {
    return even;
  }
  if(mod == 0)
  {
    return even;
  }

    return "nONE";
}