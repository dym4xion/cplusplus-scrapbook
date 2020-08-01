#include <iostream>
using namespace std;

int summation(int nums[], int n);

int main(){
    int vals[] = {1,2,3,4,5};
    int r = summation(vals, 5);
    cout << r << endl;
    return 0;
}

int summation(int nums[], int n){
    register int sum = 0;
    for (register int i = 0; i < n; i++) sum += nums[i];
    return sum;
}
