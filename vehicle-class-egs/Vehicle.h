#include <iostream>
using namespace std;

// attributes common to any combustion engine vehicle
class Vehicle {
    // inst vars
    int nPass;
    int fCap;
    int mpg;
public:
    // con/des
    Vehicle(int numPassengers, int fuelCapacity, int fuelRate);
    Vehicle();
    ~Vehicle();
    // accessors
    int get_num_passengers() { return nPass; }
    int get_fuel_capacity() { return fCap; }
    int get_num_mpg() { return mpg; }
    // other methods
    virtual int range() {return fCap * mpg;}
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

class Plane : public Vehicle {
    public:
        int ws;
        Plane(int wingspan);
        ~Plane();
        int getWingspan();
};

Plane::Plane(int wingspan) : Vehicle(){
    ws = wingspan;
}

Plane::~Plane(){
    cout << "destructing a plane" << endl;
}

int Plane::getWingspan(){
    return ws;
}

class JetPlane : public Plane {
    public:
        int ws;
        int air;
        JetPlane(int wingspan, int airIntakeRate);
        ~JetPlane();
        int getAir() { return air; }
        int range() { return (get_fuel_capacity()*get_num_mpg()) / 2 + 30; } // completely arbitrary and nonsensical formula used to demo virtual methods without having to write constructors for plane and jet plane that also take passenger capacity, fuel capacity, and mpg...
};

JetPlane::JetPlane(int wingspan, int airIntakeRate) : Plane(wingspan){
    air = airIntakeRate;
}

JetPlane::~JetPlane(){
    cout << "destructing a jet plane" << endl;
}
// did you know that a derived class can have multiple base classes...
