#include <iostream>
using namespace std;

// attributes common to any combustion engine vehicle
class Vehicle {
        // inst vars
    protected:    
        int nPass;
        int fCap;
        int mpg;
    public:
        // con/des
        Vehicle(int numPassengers, int fuelCapacity, int fuelRate);
        ~Vehicle();
        // accessors
        int get_num_passengers() { return nPass; }
        int get_fuel_capacity() { return fCap; }
        int get_num_mpg() { return mpg; }
        // other methods
        virtual int range() {return fCap * mpg;}
        friend ostream &operator<<(ostream &stream, Vehicle v);
};
ostream &operator<<(ostream &stream, Vehicle v){
    stream << "Vehicle has " << v.nPass << " passengers \n";
    stream << "Vehicle has fuel capacity of " << v.fCap << " gallons \n";
    stream << "Vehicle has a fuel rate of " << v.mpg << " miles per gallon \n";
    stream << "Vehicle has range of " << v.range() << " miles \n";
    return stream;
}

Vehicle::Vehicle (int numPassengers, int fuelCapacity, int fuelRate){
    nPass = numPassengers;
    fCap = fuelCapacity;
    mpg = fuelRate;
}


Vehicle::~Vehicle(){
    cout << "destructing generic vehicle" << endl;
}

class Plane : public Vehicle {
    protected:
        int ws;
    public:
        Plane(int pass, int cap, int mpg, int wingspan);
        ~Plane();
        int get_wingspan();
        friend ostream &operator<<(ostream &stream, Plane p);
};

ostream &operator<<(ostream &stream, Plane p){
    stream << "Plane has " << p.nPass << " passengers \n";
    stream << "Plane has fuel capacity of " << p.fCap << " gallons \n";
    stream << "Plane has a fuel rate of " << p.mpg << " miles per gallon \n";
    stream << "Plane has range of " << p.range() << " miles \n";
    stream << "Plane has wingspan of " << p.ws << " metres \n";
    return stream;
}

Plane::Plane(int pass, int cap, int mpg, int wingspan) : Vehicle(pass, cap, mpg){
    ws = wingspan;
}

Plane::~Plane(){
    cout << "destructing a plane" << endl;
}

int Plane::get_wingspan(){
    return ws;
}


class JetPlane : public Plane {
    protected:
        int air;
    public:
        JetPlane(int pass, int cap, int mpg, int wingspan, int airFlowRate);
        ~JetPlane();
        int get_air() { return air; }
        int range() { return (get_fuel_capacity()*get_num_mpg()) / 2; }
        friend ostream &operator<<(ostream &stream, JetPlane jp);
};

ostream &operator<<(ostream &stream, JetPlane jp){
    stream << "JetPlane has " << jp.nPass << " passengers \n";
    stream << "JetPlane has fuel capacity of " << jp.fCap << " gallons \n";
    stream << "JetPlane has a fuel rate of " << jp.mpg << " miles per gallon \n";
    stream << "JetPlane has range of " << jp.range() << " miles \n";
    stream << "JetPlane has wingspan of " << jp.ws << " metres \n";
    stream << "JetPlane has air flow rate of " << jp.air << " kgps \n";
    return stream;
}

JetPlane::JetPlane(int pass, int cap, int mpg, int wingspan, int airIntakeRate) : Plane(pass, cap, mpg, wingspan){
    air = airIntakeRate;
}

JetPlane::~JetPlane(){
    cout << "destructing a jet plane" << endl;
}

// did you know that a derived class can have multiple base classes...
