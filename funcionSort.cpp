#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> prueba = {6,7,4,8,2,4,9,4,1,5,8,0};

    sort(prueba.begin(), prueba.end());

    for(int i = 0; i < prueba.size(); i++){
        cout << prueba[i] << " ";
    }

    return 0;
}