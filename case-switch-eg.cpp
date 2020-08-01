#include <iostream>
using namespace std;

int main(){
    cout << "Enter first initial: ";
    char i;
    cin >> i; 
    
    switch(i){
        case 'j':
            cout << "Your name could be James.\n";
            break;
        case 's':
            cout << "Your name could be Sarah.\n";
            break;
        case 'z':
            cout << "Your name could be Zach.\n";
            break;
        default:
            cout << "Your name cannot be James, Sarah or Zach.\n";
            break;
    }
    
    cout << "Enter age: ";
    int a;
    cin >> a; 
    
    switch(a){
        case 1:
        case 2:
        case 3:
            cout << "You are a baby.\n";
            break;
        case 4:
        case 5:
        case 6:
            cout << "You are a child.\n";
            break;
        default:
            cout << "You are older than 6.\n";
            break;
    }

    cout << "\n";
    return 0;
}
