// reverse triangle pattern
#include <iostream> 
using namespace std; 

int main()
    {
    int a  ;
    
    cout << "enter :";
cin >> a ;
    for(int i=0;i<a;i++){
      int sum=i+1;
      for(int j=0;j<i+1;j++){
       cout << sum;
      sum--;
      }
       
      cout << endl ;
    }
      

    
  return 0;
  }