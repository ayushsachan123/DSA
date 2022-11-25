#include<iostream>

using namespace std;

int countF(int ind,int sum,int arr[],int n){

  if(ind==n){
     if(sum==0){
        return 1;
     }
     else{
        return 0;
     }
  }  
  int left;
  //When can you pick a particular index
  if(arr[ind]<=sum){
    //sum will decrease
    sum-=arr[ind];
    left = countF(ind,sum,arr,n);
    //restore sum
    sum += arr[ind];
  }
  //non pick, means move to the next index
 int  right = countF(ind+1,sum,arr,n);
    return left+right;
} 
int main(){

    return 0;
}
