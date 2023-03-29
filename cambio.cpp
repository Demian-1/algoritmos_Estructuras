#include <iostream>
#include <vector>
using namespace std;

vector<int> greedyChange(int coinSet[], int cambio){
    int n = sizeof(coinSet)/sizeof(coinSet[0]);
    int m;
    vector<int> monedas;
    monedas;

    for(int i = n-1; i>=0; i--){
        if(coinSet[i]>=cambio){
            m = cambio % coinSet[i];
            cambio = cambio - m*coinSet[i];
            monedas.push_back(m);  
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,5,10,20,50};
    vector<int> hola = {1,2,5,10,20,50};

    for(int i=0; i<hola.size(); i++){
        cout<<hola[i]<<" ";
    }
    
    return 0;
}
