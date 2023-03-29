#include <iostream>

using namespace std;

int recursiveFibo( int n ){
    //cout<<"Calculando fibo "<<n<<"\n";
    if( n==1 || n==0 ){
        return n;
    } else{
        return (recursiveFibo( n-1 ) + recursiveFibo( n-2 ));
    }
}


int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : "<<recursiveFibo(x);
   return 0;
}