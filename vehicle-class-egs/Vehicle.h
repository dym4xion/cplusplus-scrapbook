#include <iostream>
using namespace std;

class Vehicle {
    // inst vars
    int nPass;
    int fCap;
    int mpg;
public:
    // con/des
    Vehicle (int numPassengers, int fuelCapacity, int fuelRate);
    Vehicle ();
    ~Vehicle();
    // accessors
    int get_num_passengers() { return nPass; }
    int get_fuel_capacity() { return fCap; }
    int get_num_mpg() { return mpg; }
    // other methods
    int range();
};

Vehicle::Vehicle (int numPassengers, int fuelCapacity, int fuelRate){
    nPass = numPassengers;
    fCap = fuelCapacity;
    mpg = fuelRate;
}

Vehicle::Vehicle (){
    nPass = 0;
    fCap = 0;
    mpg = 0;
}

Vehicle::~Vehicle(){
    cout << "destructing" << endl;
}

int Vehicle::range() {return fCap * mpg;}
