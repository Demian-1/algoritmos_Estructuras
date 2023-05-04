#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<int,int> bucket;
    int currentNumber;
    for(int i=0;i<n;i++){
        cin>>currentNumber;
        bucket[currentNumber]++;
    }

    for(auto it = bucket.begin(); it!=bucket.end();it++){
        cout<<it -> first << " - " << it -> second << endl;
    }
}