#include <iostream>
using namespace std;
int add(int number1, int number2);
float divide(float number1, float number2);

main()
{
 float result;
 result = add(12,14);
 cout <<"Result is : " <<result <<endl;
 result =  divide(10,3);
 cout <<"Result is : " <<results <<endl;
}

int add(int number1, int number2)
{
 int result = number1 + number2;
 return result;
}

float divide(float number1, float number2)
{
 float results = number1 / number2;
 return results;
}