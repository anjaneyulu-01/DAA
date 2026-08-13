#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
  int fact = 1;
  for(int i=1; i<=n; i++){
    fact*=i;
  }
  return fact;
}

int main(){
  int n;
  cout<<"enter the number for the factorial : ";
  cin>>n;
  cout<<"By Iterative method "<<endl;
  cout<<"Factorial of "<<n<<" : "<<factorial(n);
  return 0;
}