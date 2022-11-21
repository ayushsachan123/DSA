#include<iostream>
using namespace std;


double e(int x,int n){
  static double p=1,f=1;
if(n==0)
    return 1;
    else{
        double r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main(){
int x=1,n=10;
double r=e(x,n);
cout<<r<<endl;
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output-
// 2.71828
