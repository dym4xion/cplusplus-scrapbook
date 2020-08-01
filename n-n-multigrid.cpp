#include <iostream>
using namespace std;

int main(){
    cout << "Enter n dimension: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << "  " << i*j << "  ";
        }
        cout << "\n";
    }

    cout << "\n";
    return 0;
}
