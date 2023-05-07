#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, aux, r, l, i, k, min;
    vector<int> h;
    priority_queue<int> heights;

    cin>>n;
    for(int e=0;e<n;e++){
        cin>>aux;
        h.push_back(aux);
    }

    // for(int e=0; e<n; e++){
    //     cout<<h[e]<<" ";
    // }

    // first aproach: sliding window
    // 29 85 88 12 52 37 19 86 7 44
    //                            ^
    // look for a higher peek, then for a smaller 
    // 29 85 88 12 52 37 19 86 7 44
    //                   ^     ^        then, get the min height 
    for(int j=0; j<h.size(); j++){
        i=j-1;
        k=j+1;
        if((i>=0) and (k<=h.size())){
            // cout<<"start: "<<h[i]<<endl;
            // cout<<"peek: "<<h[j]<<endl;
            // cout<<"end: "<<h[k]<<endl;
            if((h[i]<=h[j]) and (h[j]>=h[k])){
                l=h[j]-h[i];
                r=h[j]-h[k];
                if(l<r){
                    heights.push(l);
                }else{
                    heights.push(r);
                }
                
            }
        }
    }
    
    cout<<heights.top();
    cout<<"Hola:   "<<h[n+1];
    return 0;
}