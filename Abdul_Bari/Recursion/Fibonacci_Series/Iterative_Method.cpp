#include<iostream>
using namespace std;

int fib(int n){
  int a=0,b=1;
  int s;
  if(n<=1){
    return n;
  }

  for(int i=2;i<=n;i++){
    s=a+b;
    a=b;
    b=s;
  }
return s;

}

int main(){
    
int ans=fib(5);
cout<<ans<<endl;

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 5
