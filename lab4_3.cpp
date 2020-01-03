#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int x)
{  int y=2;
    while (y>0)
    {
     if(x%y==0){
         return y;}
     else{
         y++;}
    }
     }


int main(){
    cout << findDivisor(10) << "\n";
    cout << findDivisor(97) << "\n";
    cout << findDivisor(221) << "\n";
    return 0;
}



