#include<iostream>
using namespace std;

int n,m;
void findPaths(int i,int j,string s){
    //one base case which check if we have crossed boundaries
    if(i>=n || j>=m) return ;
if(i==n-1 && j==m-1){
    cout<<s<<endl;
    return;
}
s +='D';
findPaths(i+1,j,s);
s.pop_back();

s +='R';
findPaths(i,j+1,s);
s.pop_back();
}

int main(){
cin>>m>>n;
findPaths(0,0,"");
    return 0;
}
