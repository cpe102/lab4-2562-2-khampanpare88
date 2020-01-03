#include<iostream>
#include<cmath>
using namespace std;

double findmyresult(double x)
{return (3*x*x*x)+(2*2.71828)+pow(2,(2*x+1))+pow((x*x)+1,0.5);}

int main(){
 double x , y;
  cout << "enter X = ";
  cin >> x;
  cout << "Result y =" << findmyresult(x);

  return 0;
}
