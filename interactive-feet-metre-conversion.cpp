#include <iostream>
using namespace std;

void feet2metres();
void metres2feet();

int main(){
    cout << "Type '1' for Feet -> Metres or '2' for Metres -> Feet: ";
    int fom;
    cin >> fom;
    if (fom == 1){
        feet2metres();
    } else if (fom == 2){
        metres2feet();
    } else {
        cout << "Are you really so stupid that you can't type one of two" 
                " numbers?\n\n";
    }
    return 0;
}

void feet2metres(){
    cout << "Enter length in feet: \n";
    double ft;
    cin >> ft;
    cout << ft << "ft is " << ft/3.2808 <<"m.\n";
}

void metres2feet(){
    cout << "Enter length in metres: \n";
    double m;
    cin >> m;
    cout << m << "m is " << m*3.2808 <<"ft.\n";
}
