#include <iostream>
using namespace std;

void hmm(int &i);

int main(){
    int a = 55;
    cout << a << endl;
    hmm(a);
    cout << a << endl;

    return 0;
}

void hmm(int &i){
    i*=i;
}
