#include <iostream>
#include <cmath>
using namespace std;

double cube(double length);
double cuboid(double length, double height, double width);
double sphere(double radius);
double cylinder(double radius, double height);
double cone(double radius, double height);
double squareBasedPyramid(double height, double baseSideLength);

const double pi = 3.141592;

int main(){
    return 0;
}

double cube(double length){
    return pow(length, 3);
}

double cuboid(double length, double height, double width){
    return length * height * width;
}

double sphere(double radius){
    return 4/3 * pi * pow(radius, 3);
}

double cylinder(double radius, double height){
    return pi * pow(radius, 2) * height;
}

double cone(double radius, double height){
    return 1/3 * cylinder(radius, height);

}

double squareBasedPyramid(double height, double baseSideLength){
    return 1/3 * pow(baseSideLength, 2) * height;
}
