#include <iostream>
using namespace std;
int main ()
{float t1,t2,t3;
cin>>t1>>t2>>t3;
{cout.setf (ios::fixed);cout.precision(2); cout<<1/(1/t1+1/t2+1/t3);}
return 0;}
