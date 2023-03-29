#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> qty;
    int aux, sum=0;

    cout<<"cuantas monedas tienes de: \n";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" : ";
        cin>>aux;
        cout<<"\t = "<<aux*arr[i]<<endl;
        qty.push_back(aux);
    }

    for(int i = 0; i<n; i++){
        qty[i]=qty[i]*arr[i];
    }

    for(int i = 0; i<n; i++){
        sum = sum + qty[i];
    }

    cout<<"\nHay "<<sum<<" en total";
    return 0;
}
