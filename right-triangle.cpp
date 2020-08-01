#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "         /|\n";
    cout << "        / |\n";
    cout << "       /  |\n";
    cout << "      /   |\n";
    cout << " c   /    |\n";
    cout << "    /     | b\n";
    cout << "   /      |\n";
    cout << "  /       |\n";
    cout << " /        |\n";
    cout << "/         |\n";
    cout << "----------\n";
    cout << "     a     \n";
    double a, b, c;
    cout << "Enter length of a: ";
    cin >> a;
    cout << "Enter length of b: ";
    cin >> b;
    c = sqrt(a*a + b*b);
    cout << "c = " << c << "\n";
    return 0;
}
