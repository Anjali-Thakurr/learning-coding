// Sum of n numbers divisible by 3
#include <iostream> 
using namespace std; 

int main()
    {
      int a , sum=0;
      cout << "enter a number ";
      cin >> a;
      for (int i= 1; i<=a; i++){
         if (i%3==0){
         sum+=i;
         }
      }
      cout << sum << endl;
  return 0;
  }