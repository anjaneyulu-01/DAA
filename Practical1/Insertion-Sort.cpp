#include<bits/stdc++.h>
using namespace std;

void InsertionSort( vector<int>&nums ){
  for(int i=0; i<nums.size(); i++){
     int j = i; 
     while(j>0 && nums[j]<nums[j-1]){
       swap(nums[j],nums[j-1]);
       j--;
     }
  }
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
   InsertionSort(nums);
   cout<<"Sorted Array : ";
   for(int val : nums){
     cout<<val<<" ";
   }
}
