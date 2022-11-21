#include<iostream>
using namespace std;

double e(int x,int n){
    double s=1;
    int i;
    double num=1;
    double deno=1;

    for(int i=1;i<=n;i++){
        num*=x;
        deno*=i;
        s+=num/deno;
    }
    return s;
}
int main(){
double r=e(1,10);
cout<<r;
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 2.71828
