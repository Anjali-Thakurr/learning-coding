//Decimal to binary conversion
#include <iostream> 
using namespace std; 
//function
int dectobi(int x){
    int sum=0,p=1;
while(x!=0){
    int r=x%2;
    sum+=r*p;
    p=p*10;
    x=x/2;
}
return sum;
}

int main(){
 int n ;

  cout << " enter a decimal number " ;
  cin >> n; 
 
cout << dectobi(n) ;
}
