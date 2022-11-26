#include<iostream>
#include<vector>
using namespace std;

void func(int ind,vector<int> &ds,int sum,int arr[],int n){
if(ind==n && sum %n ==0){
    //print statement -> o(n)
    for(auto it:ds){
        cout<<it<<" ";
    }
    cout<<endl;
    return;
}
ds.push_back(arr[ind]);
sum+=arr[ind];
//pick it
func(ind+1,ds,sum,arr,n);
ds.pop_back();
sum -= arr[ind];
//not pick
func(ind+1,ds,sum,arr,n);

}

int main(){

    return 0;
}

