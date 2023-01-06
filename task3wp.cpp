#include<iostream>
using namespace std;

int symmetrical(int number1 , int number2, int number3);
main()
{
int number1;
int number2;
int number3;
  symmetrical(number1, number2, number3);
  
}
int symmetrical(int number1 , int number2, int number3)
{
  
  cout <<"Enter no 1 :";
  cin >> number1;
  cout <<"Enter no 2 :";
  cin >> number2;
  cout <<"Enter no 3 :";
  cin >> number3;
  if(number1 == number3)
{
  cout <<"Number is symmetrical";

}
  if(number1 != number3)
{
  cout <<"Number is unsymmetrical";

}
}