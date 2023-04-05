#include <iostream>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n; 
  cin>>n;
  int acc = 1;
  int l=1, r=2;
  int sum = l + r;

  while(r<=(n/2+1)){
    if(sum<n){
      r++;
      sum = sum + r;
    }else if(sum>n){
      sum = sum - l;
      l++;
    }else{
        cout<<l<<","<<r<<endl;
      r++;
      sum = sum + r;
      acc++;
    }
  }

  cout<<acc;

  return 0;
}