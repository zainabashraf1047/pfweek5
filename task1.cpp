#include <iostream>
#include <cmath>

using namespace std;

float calheight(float distance, float degree);


main()
{
 float base;
 float degrees;
 cout <<"Enter distance";
 cin >> base;
 cout <<"Enter angle";
 cin >> degrees;
 float height = calheight(float distance, float degree);
 cout <<"The height of tree is " <<height;
}
float calheight(float distance, float degree)
{
  float radian;
  float angle;
  float radians;
  float height;

  radian =57.2958;
  radians = degree/radian;
  angle = tan(radians);
  height = angle * distance;
 
  return height;
}