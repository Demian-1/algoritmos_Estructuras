#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i,j,k;
    long long aux;
    vector<long long> h;
    priority_queue<long long> heights;

    cin>>n;
    for(int e=0;e<n;e++){
        cin>>aux;
        h.push_back(aux);
    }
    
    i=j=k=0;
    char s='u';
    for(k;k<h.size();k++){
        if(s=='u' and k!=n-1){
            if(h[k]>=h[j]){
                j=k;
            }else{
                s='d';
                k--;
            }
        }else{
            if((h[k+1]>h[k])or((k+1)==n)){
                if((h[j]-h[i])<(h[j]-h[k])){
                    heights.push(h[j]-h[i]);
                }else{
                    heights.push(h[j]-h[k]);
                }
                i=k;
                j=k;
                s='u';
            }
        }
    }


    cout<<heights.top();
    return 0;
}