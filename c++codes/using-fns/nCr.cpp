// calculate n!
#include <iostream> 
using namespace std; 

int fac(int x){
int a= x,s=1;
for (int i=a;i>0;i--){
  s=s*i;
}
return s;
}

int main(){
 int n,r;
 cout << "To calculate nCr : " << endl ;
 cout << "Enter value for n : ";
 cin>>n;
 cout << "Enter value for r : ";
 cin>>r;

 cout << fac(n)/(fac(n-r)*fac(r));// n!/(n-r)!*(r)!
}