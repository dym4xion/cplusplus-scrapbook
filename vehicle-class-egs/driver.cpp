#include <iostream>
#include "Vehicle.h"
using namespace std;

int main(){
    Vehicle v = Vehicle(20, 40, 50);
    cout << v;
    cout << endl;
    
    Plane p = Plane(20, 40, 50, 20);
    cout << p;
    cout << endl;
    
    JetPlane jp = JetPlane(20, 40, 50, 20, 1000);
    cout << jp;

// inserter overloading lets us do some cool stuff. the lines above and below do 
// the same thing
//    Vehicle bus = Vehicle(20, 40, 50);
//    cout << "bus has " << bus.get_num_passengers() << " passengers" << endl;
//    cout << "bus has fuel capacity of " << bus.get_fuel_capacity() << " gallons" << endl;
//    cout << "bus has a fuel rate of " << bus.get_num_mpg() << " miles per gallon" << endl;
//    cout << "bus has range of " << bus.range() << " miles" << endl;
//
//    Vehicle car = Vehicle();
//    cout << "car has " << car.get_num_passengers() << " passengers" << endl;
//    cout << "car has fuel capacity of " << car.get_fuel_capacity() << " gallons" << endl;
//    cout << "car has a fuel rate of " << car.get_num_mpg() << " miles per gallon" << endl;
//    cout << "car has range of " << car.range() << " miles" << endl;
//    
//
//    Plane p = Plane(55);
//    cout << "plane has " << p.get_num_passengers() << " passengers" << endl;
//    cout << "plane has fuel capacity of " << p.get_fuel_capacity() << " gallons" << endl;
//    cout << "plane has a fuel rate of " << p.get_num_mpg() << " miles per gallon" << endl;
//    cout << "plane has range of " << p.range() << " miles" << endl;
//    cout << "plane has wingspan of " << p.get_wingspan() << " metres" << endl;
//    
//    JetPlane jp = JetPlane(55, 1000);
//    cout << "jet plane has " << jp.get_num_passengers() << " passengers" << endl;
//    cout << "jet plane has fuel capacity of " << jp.get_fuel_capacity() << " gallons" << endl;
//    cout << "jet plane has a fuel rate of " << jp.get_num_mpg() << " miles per gallon" << endl;
//    cout << "jet plane has range of " << jp.range() << " miles" << endl;
//    cout << "jet plane has wingspan of " << jp.get_wingspan() << " metres" << endl;
//    cout << "jet plane has engine air intake rate of " << jp.get_air() << " kg/s" << endl;
//    
    return 0;
}
