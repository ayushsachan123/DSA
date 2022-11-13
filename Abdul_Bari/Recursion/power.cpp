#include<iostream>
using namespace std;

int pow(int m,int n){
    if(n==0)
        return 1;
    return pow(m,n-1)*m;
}
int pow1(int m,int n){
    if(n==0)
      return 1;
    else if(n%2==0)
       return pow1(m*m,n/2);
    return m*pow(m*m,(n-1)/2);
}
int main(){
int m=2;
int n=5;
int r=pow(m,n);
int s=pow1(m,n);
cout<<"by pow "<<r<<endl;
cout<<"by pow1 "<<s<<endl;
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// by pow 32
// by pow1 32
