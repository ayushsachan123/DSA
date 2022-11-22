#include<iostream>
using namespace std;

int nCr(int n,int r){
    if(r==0 || r==n){
     return 1;
    }
    else{
        return nCr(n-1,r-1) + nCr(n-1,r);
    }
}  

int main(){
int ans=nCr(4,2);
cout<<ans<<endl;
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 6
