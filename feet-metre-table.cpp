#include <iostream>
using namespace std;

int main(){
    cout << "Enter num. feet to go to (int pls): ";
    int ft;
    cin >> ft;
    int counter = 0;

    for (int i = 1; i < ft+1; i++){
        cout << i << "ft is " << i*0.3048 << "m\n";
        counter++;
        if (counter == 10){
             cout << "\n"; 
             counter = 0;
        }
    }
    return 0;
}
