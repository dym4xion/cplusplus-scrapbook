#include <iostream>
using namespace std;

bool testPrime(int a);

int main(){
    cout << "Find primes up to ... ";
    int n;
    cin >> n;
    
    int pCount = 1;
    for (int i = 2; i <= n; i++){
        bool prime = testPrime(i);
        if (prime) {
            cout << i << " is prime number: " << pCount << "\n";
            pCount++;
        }
    }
    
    cout << "\n";
    return 0;
}

bool testPrime(int a){
    if (a <= 1) return false;

    for (int i = 2; i < a; i++){
        if ((a % i) == 0) {
            return false;
        }
    }
    return true;
}
