#include <iostream>
#include "Vehicle.h"
using namespace std;

int main(){
    Vehicle bus = Vehicle(20, 40, 50);
    cout << "bus has " << bus.get_num_passengers() << " passengers" << endl;
    cout << "bus has fuel capacity of " << bus.get_fuel_capacity() << " gallons" << endl;
    cout << "bus has a fuel rate of " << bus.get_num_mpg() << " miles per gallon" << endl;
    cout << "bus has range of " << bus.range() << " miles" << endl;

    Vehicle car = Vehicle();
    cout << "car has " << car.get_num_passengers() << " passengers" << endl;
    cout << "car has fuel capacity of " << car.get_fuel_capacity() << " gallons" << endl;
    cout << "car has a fuel rate of " << car.get_num_mpg() << " miles per gallon" << endl;
    cout << "car has range of " << car.range() << " miles" << endl;
    
    return 0;
}
