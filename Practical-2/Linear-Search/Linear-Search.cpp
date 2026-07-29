#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int>&nums,int target){
  for(int i=0; i<nums.size(); i++){
    if(nums[i]==target){
      return i;
    }
  }
  return -1;
}

int main(){
  int size;
  cout<<"enter the size of the array : ";
  cin>>size;
  vector<int>nums(size);
  for(int i=0; i<nums.size(); i++){
    cout<<"enter the element "<<i+1<<" : ";
    cin>>nums[i];
    cout<<endl;
  }
  int target;
  cout<<"enter the target : ";
  cin>>target;
  cout<<endl;
  int result = LinearSearch(nums,target);
  if(result != -1){
    cout<<"target is found at index : "<<result;
    return 0;
  }
  cout<<"target is not found";
  return 0;
}