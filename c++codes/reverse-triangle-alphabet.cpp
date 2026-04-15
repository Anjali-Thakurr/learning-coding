// Reverse alphabet triangle
#include <iostream> 
using namespace std; 

int main()
    {
    char a,j=0  ;
    
    cout << "enter :";
cin >> a ;
char sum='A';
    for(char i='A'; i<=a; i++){
           
      for( j='A'; j<=i ;j++){
        
       cout << sum << "\t";
      sum--;
      }
       sum=j;
      cout << endl ;
    }

   
  return 0;
  }