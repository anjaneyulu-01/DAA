#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>&nums,int target){
      int low = 0; 
      int high = nums.size()-1;
      while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target){
          return mid;
        }
        else if(nums[mid]<target){
          low = mid + 1;
        }
        else {
          high = mid - 1;
        }
      }
      return -1;
}

int main(){
  int size;
  cout<<"enter the size of the Array : ";
  cin>>size;
  vector<int>nums(size);
  for(int i=0; i<nums.size(); i++){
    cout<<"enter the element "<<i+1<<" : ";
    cin>>nums[i];
    cout<<endl;
  }
  int target;
  cout<<"enter the target element : ";
  cin>>target;
  int ans = BinarySearch(nums,target);
  if(ans!=-1){
    cout<<"Target found at index : "<<ans;
    return 0;
  }
  cout<<"Target is not found";
  return 0;
}
