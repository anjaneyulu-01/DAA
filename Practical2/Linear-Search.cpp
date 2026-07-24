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
   cout<<"enter the size of the Array : ";
   cin>>size;
   cout<<endl;
   vector<int>nums(size);
   for(int i=0; i<nums.size(); i++){
     cout<<"enter the element "<<i+1<<" : ";
     cin>>nums[i];
     cout<<endl;
   }
   int target;
   cout<<"enter the target : ";
   cin>>target;
   int ans = LinearSearch(nums,target);
   if(ans!=-1){
     cout<<"Target found at index : "<<ans;
     return 0;
   }
   cout<<"Target element is not found";
   return 0;
}
