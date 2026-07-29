#include<bits/stdc++.h>
using namespace std ;


void InsertionSort(vector<int>&nums){
  for(int i=0; i<nums.size(); i++){
    int j=i;
    while(j>0 && nums[j]>=nums[i]){
      swap(nums[j],nums[i]);
      j--;
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
  InsertionSort(nums);
  cout<<"sorted array : ";
  for(int val : nums){
    cout<<val<<" ";
  }
  return 0;
}
