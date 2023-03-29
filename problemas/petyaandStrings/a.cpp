#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    char c1[100], c2[100];

    cin>>c1;
    cin>>c2;

    int j=0;
    while(c1[j]){
       if(c1[j]<97){
            c1[j] = c1[j]+32;
        }
        if(c2[j]<97){
            c2[j] = c2[j]+32;
        } 
        j++;
    }

    int out = 0;
    for(int i = 0; i<j; i++){
        if(c1[i]>c2[i]){
            out = -1;
            break;
        } else if(c1[i]<c2[i]){
            out = 1;
            break;
        }
    }

    cout<<out;


    return 0;
}
