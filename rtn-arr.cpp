#include <iostream>
using namespace std;

int * getArr();

int main(){
    int *p;
    p = getArr();

    for (int i = 0; i < 5; i++){
        cout << "array value " << i << " = " << *p << endl;
        p++;
    }
    cout << "\n";
    return 0;
}


int * getArr(){
    static int r[] = {1,2,3,4,5};
    return r;
}
