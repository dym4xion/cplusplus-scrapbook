#include <iostream>
using namespace std;

void swap(int *a, int *b);
void swapRP(int &a, int &b);

int main(){
    int a = 666, b = 777;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "... swapping ..." << endl;
    swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "... swapping back ..." << endl;
    swapRP(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

void swap(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void swapRP(int &a, int &b){
   int temp = a;
   a = b;
   b = temp;
}
