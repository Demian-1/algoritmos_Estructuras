#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m, child;
    vector<int> children;
    cin>>n>>m;
    cout<<"los numeros : "<<n<<m;

    int i=0;
    while(n--){
        cin>>child;
        children[i]=child;
        i++;
    }

    for(int i = 0; i<n; i++){
        cout<<children[i]<<" ";
    }


    return 0;
}