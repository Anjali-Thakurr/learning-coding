// nested for loop
#include <iostream> 
using namespace std; 

int main()
    {
      int a=5, m=2 ,i;
// line print 
       for (i=0;i<=a;i++){
        for(int m=0;m<=a;m++){
        cout<< "*";
        } 
     } 
     cout << endl;
// shaped print
     for (i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
        cout<< "*";
        } cout << endl;
     }
  return 0;
  }