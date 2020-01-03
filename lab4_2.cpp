#include<iostream>

using namespace std;

double findDistance(double u,double a,double t)
{return (u*t)+(0.5*a*(t*t));}

int main(){
double s, u, a, t;
cout << "s =" << findDistance(0,0.5,1);
cout << "s =" << findDistance(1.5,(-1),2);
cout << "s =" << findDistance(5,4,3);
  return 0;
}
