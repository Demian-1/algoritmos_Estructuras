#include <bits/stdc++.h> //incluye listas colas todo 
// si solo quieres una estructura #include <queue>

using namespace std;

// class perro {
//     public:
//     string color; 
//     string ladrar(){
//         return "woof";
//     }
// };

int main(){
    deque <int> myDeck;
    myDeck.push_back(8);
    myDeck.push_front(2);
    myDeck.push_back(0);
    myDeck.push_front(9);

    while(!myDeck.empty()){
        cout<<myDeck.front();
        myDeck.pop_front();
    }
    cout << "\nhola\n";
}