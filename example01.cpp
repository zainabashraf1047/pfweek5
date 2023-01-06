#include <iostream>
using namespace std;
int isless(int number1, int number2);


main()
{
  int number1;
  int number2;
  int result;
  cout << "Enter no 1 : ";
  cin >> number1;
  cout << "Enter no 2 : ";
  cin >> number2;
  result = isless(number1, number2);
  cout  << "Minimum no is : " << result << endl;
}

int isless(int number1, int number2)
{
  
  if(number1 > number2)
  {
    return number2; 
  }
  if(number1 < number2)
  {
     return number1; 
  }
   return 0;
}
