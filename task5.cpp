#include<iostream>
using namespace std;
int timeafter15( int hour , int min);
main()
{
  
  int hour;
  int min;
  int result;
  cout << "Enter hours :  ";
  cin >> hour;
  cout << "Enter minutes : ";
  cin >> min;
  result = timeafter15( hour , min);
 
}
int timeafter15( int hour , int min)
{
 
  
  int result ;
  min = min + 15;
  cout <<  "time is" <<hour <<"::" << min;

  if(min > 59)
  {
    hour = hour + 1;
    min = min - 60;
    cout <<hour <<"::" <<min ; 
  }
  if(hour > 23)
  {
    hour = 0;
    cout <<hour <<"::" <<min;
  }
   return result;
}