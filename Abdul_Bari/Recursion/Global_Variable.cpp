#include<iostream>
using namespace std;
  
 int x=0;
int fun(int n){
 
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
 return 0;
}
int main(){
    int a=5;
    int r=fun(a);
    cout<<r<<endl;

//as global variable will become 25 and will remain 25 and now again if
//it call so it become incresing fom 25

    int s=fun(a);
    cout<<s<<endl;
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 25
// 50
