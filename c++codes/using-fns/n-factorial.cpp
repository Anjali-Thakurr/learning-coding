// n factorial
#include <iostream> 
using namespace std; 

int sum(int n){
int a,s=1;
a=n;
for(int i=1;i<=a;i++){
  s=s*i;
}
return s;
}

int main(){
 int n;
 cin>>n;
 cout<< sum(n);
}