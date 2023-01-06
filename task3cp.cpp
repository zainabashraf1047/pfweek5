#include<iostream>
using namespace std;
string symmetrical(int no1, int no2, int no3);
main()
{
   int no1 , no2 ,no3 ,rem , num;
   cout <<"Enter three digit number : ";
   cin >>num;
   rem = num % 100;
   no1 = num / 100;
   no2 = rem / 10;
   no3 = rem % 10;
   string result = symmetrical(no1 , no2 , no3);
   cout << result;

}
string symmetrical(int no1, int no2, int no3)
{
    string s = "symmetrical";
    string u = "unsymmetrical";
    if(no1 == no3)
    {
      return s;
    
    }
    if(no1 != no3)
    {
      return u;
    }
     return 0;
}