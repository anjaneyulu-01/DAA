#include<bits/stdc++.h>
using namespace std ;


void SelectionSort(vector<int>&nums){
  for(int i=0; i<nums.size(); i++){
    int smallest = i;
    for(int j=i+1; j<nums.size(); j++){
        if(nums[smallest]>nums[j]){
          smallest = j;
        }
      }
      swap(nums[smallest],nums[i]);
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
  SelectionSort(nums);
  cout<<"sorted array : ";
  for(int val : nums){
    cout<<val<<" ";
  }
  return 0;
}
