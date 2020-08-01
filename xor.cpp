#include <iostream>
using namespace std;

bool myXor(bool a, bool b);

int main(){
    cout << "0 xor 0 is " << myXor(0,0) << "\n";
    cout << "0 xor 1 is " << myXor(0,1) << "\n";
    cout << "1 xor 0 is " << myXor(1,0) << "\n";
    cout << "1 xor 1 is " << myXor(1,1) << "\n";
    cout << "\n";
    return 0;
}

bool myXor(bool a, bool b){
    return ((a || b) && (!(a && b)));
}
