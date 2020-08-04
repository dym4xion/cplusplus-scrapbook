#include <iostream>
#include <iomanip>
using namespace std;

int intWidth(int i);

int main(){
    cout << "Enter n dimension: ";
    int n;
    cin >> n;
   
   int width = intWidth(n * n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            //cout " ";
            //cout.width(width + 1);
            //cout.fill('0');
            //cout << I * j;

            cout << " ";
            cout << setw(width) << setfill('0') <<  i*j ;
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}

int intWidth(int i){
    int width = 0;
    while (i > 0){
        i /= 10;
        width++;
    }
    return width;
}
