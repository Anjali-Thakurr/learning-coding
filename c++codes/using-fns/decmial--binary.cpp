//Decimal to binary conversion
#include <iostream> 
using namespace std; 

int main(){
 int sum=0,p=1,n ;

  cout << " enter a number " ;
  cin >> n; 
 //convert
while(n!=0){
    int r=n%2;
    sum+=r*p;
    p=p*10;
    n=n/2;
}
cout << sum;
}
