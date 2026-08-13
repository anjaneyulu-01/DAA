#include<bits/stdc++.h>
using namespace std;

int recursive(int n){
  if(n==0 || n==1){
    return 1;
  }
  return n * recursive(n-1);
}

int main(){
  int n;
  cout<<"enter the number for the factorial : ";
  cin>>n;
  cout<<"By Recursive method "<<endl;
  cout<<"Factorial of "<<n<<" : "<<recursive(n);
  return 0;
}