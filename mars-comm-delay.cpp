#include <iostream>
using namespace std;

int main(){
    double distance2Mars = 34000000; //miles
    double c = 186000; // miles per sec
    double delay = distance2Mars / c; // in sec
    double delay_m = delay / 60;
    cout << "Message time to Mars = " << delay_m << " mins.";
    cout << "\n";
    return 0;
}
