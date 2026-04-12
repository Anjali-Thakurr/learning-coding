// find if number is prime or not 
#include <iostream> 
using namespace std; 

int main()
    {
      int a ,i;
      bool prime = true ;
      cout << "tell if number is prime or not :" ;
      cin >> a ;
   for (i=2; i*i<=a;i++){
    if ( a%i==0){
     prime= false;
      break;}
    }
  if (prime==true){
    cout << "prime number";
  }
  else {
    cout << "not prime number ";
  }
  
  return 0;
  }