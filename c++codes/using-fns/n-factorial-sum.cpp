
#include <iostream> 
using namespace std; 
// n factorial
int fac(int n){
int a,s=1;
a=n;
for(int i=1;i<=a;i++){
  s=s*i;
}
return s;
}
// sum of digits of a number

int sum(int x){
  int a,b=0,num=x;
  while(num>0){
     a=num%10;
    num=num/10;
    b+=a;
  }
  return b;
}


int main(){
 int n;
 cin>>n;

cout<< n <<" sum of digits of a number is : "<< sum(n) << endl ;
 cout<< n <<" factorial is : "<< fac(n) << endl ;
}