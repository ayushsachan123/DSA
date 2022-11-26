#include<iostream>
#include<vector>
using namespace std;


void func(int ind,vector<int> &ds,int arr[],int n){
if(ind==n){
    //print statement -> o(n)
    for(auto it:ds){
        cout<<it<<" ";
    }
    cout<<endl;
    return;
}
ds.push_back(ds[ind]);
//pick it
func(ind+1,ds,arr,n);
ds.pop_back();

//not pick
func(ind+1,ds,arr,n);

}


int main(){


return 0;
}
