#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}

int main(){
int ans=fib(5);
cout<<ans;
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 5
