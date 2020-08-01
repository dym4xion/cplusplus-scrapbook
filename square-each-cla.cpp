#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// atof() parses CLAs to doubles
// atol() parses CLAs to long ints
// atoi() parses CLAs to ints

int main(int argc, char *argv[]){
    int square;
    for (int i = 1; i < argc; i++) {
        square = pow(atoi(argv[i]), 2);
        cout << square << endl;
    }
    return 0;
}
