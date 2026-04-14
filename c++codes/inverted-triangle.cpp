// 
#include <iostream> 
using namespace std; 

int main()
    {
    int a,j ,i ,k,sum=1;
    cout << "enter :";
cin >> a ;

    for( i=1; i<=a; i++){
      for(  j=0; j<i ;j++){ 
        cout << " " ;  }
        
        for (k=0;k<=a-i;k++ ){
          sum=i;
       cout << sum ;
      
      
      }
       sum++;
      cout << endl ;
    }
      
  return 0;
  }