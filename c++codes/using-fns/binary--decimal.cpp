//Binary to Decimal conversion
#include <iostream> 
using namespace std; 
//function 
int dectobi(int x){
    int sum=0,p=1,r;
    while(x!=0){
         r=x%2;
         sum+=p*r;
         p*=2;
    x/=10;
}
return sum;
}

int main(){
 int n;
 cout << " enter a binary number " ;
  cin >> n; 
 cout << dectobi(n) ;
}
