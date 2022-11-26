#include<iostream>
#include<vector>
using namespace std;

int n,m;
void findPaths(int i,int j,string s,vector<vector<int>> &vis){
    //one base case which check if we have crossed boundaries
    if(i>=n || j>=m-1|| i<0||j<0|| vis[i][j]==1) return ;
if(i==n-1 && j==m-1){
    cout<<s<<endl;
    return;
}
vis[i][j]=1;
s +='D';
findPaths(i+1,j,s,vis);
s.pop_back();

s +='R';
findPaths(i-1,j,s,vis);
s.pop_back();

s +='U';
findPaths(i,j-1,s,vis);
s.pop_back();

s +='L';
findPaths(i,j+1,s,vis);
s.pop_back();

vis[i][j]=0;
}

int main(){
cin>>m>>n;
//n*m vector is created
vector<vector<int>>vis(n,vector<int>(m,0));
findPaths(0,0,"",vis);
    return 0;
}
