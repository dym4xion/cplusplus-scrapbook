#include <iostream>
using namespace std;

enum month {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
char season[][20] = {
    "Winter",
    "Winter",
    "Spring",
    "Spring",
    "Spring",
    "Summer",
    "Summer",
    "Summer",
    "Autumn",
    "Autumn",
    "Autumn",
    "Winter"
};

int main(){
    month m = JAN;
    cout << season[m] << endl;
    m = MAR;
    cout << season[m] << endl;
    m = JUN;
    cout << season[m] << endl;
    m = SEP;
    cout << season[m] << endl;

    return 0;
}
