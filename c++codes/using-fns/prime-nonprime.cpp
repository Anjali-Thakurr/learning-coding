// calculate n is prime or not
#include <iostream> 
using namespace std; 

bool prime(int x){

if(x<=1) return false;//0 & 1 are non-prime
if (x==2)  return true;
if(x%2==0) return false; // even numbers
 // odd numbers
 for(int i=3;i*i<=x;i+=2){
  if (x%i==0) return false;
 
 } return true;
}

int main(){
  int n;
 cout << "Enter a number a : ";
 cin >> n ;

if (prime(n)){
cout << "Prime number.";
}else{
  cout << "Non-Prime number.";
}
}