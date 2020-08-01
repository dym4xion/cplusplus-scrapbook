#include <iostream>
using namespace std;

class Vehicle {
public:
    int passengers = 0;
    int fcap = 0;
    int mpg = 0;
    int range() {return fcap * mpg;}
};

int main(){
    Vehicle bus;
    bus.passengers = 20;
    bus.fcap = 20;
    bus.mpg = 40;
    int range = bus.range();
    cout << range << endl;
    return 0;
}
