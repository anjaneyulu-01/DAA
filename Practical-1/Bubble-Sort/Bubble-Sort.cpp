#include<bits/stdc++.h>
using namespace std ;


void BubbleSort(vector<int>&nums){
  for(int i=0; i<nums.size(); i++){
    for(int j=0; j<nums.size()-i-1; j++){
      if(nums[j]>nums[j+1]){
        swap(nums[j],nums[j+1]);
        }
      }
    }
}

int main(){
  int size ;
  cout<<"enter the size of the array : ";
  cin>>size;
  vector<int>nums(size);
  for(int i=0; i<size; i++){
    cout<<"enter the element "<<i+1<<" : ";
    cin>>nums[i];
    cout<<endl;
  }
  BubbleSort(nums);
  cout<<"sorted array : ";
  for(int val : nums){
    cout<<val<<" ";
  }
  return 0;
}
