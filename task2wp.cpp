#include<iostream>
using namespace std;

char alpha(char a);
main()
{
  char a;
  alpha(a);
  return a;
}


char alpha(char a)
{
  char alphabet;
  cout <<"Enter alphabet : ";
  cin >> alphabet;
  if(alphabet == 'A')
  {

    cout <<"You have entered capital A ";
  }
  if(alphabet == 'a')
  {

    cout <<"You have entered small a ";
  }
  
}