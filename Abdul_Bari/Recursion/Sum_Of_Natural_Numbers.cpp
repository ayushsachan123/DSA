#include<iostream>
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    else{
      return fun(n-1)+n;
    }
}
int main(){
    int x=5;
int r=fun(x);
cout<<r;
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 15
