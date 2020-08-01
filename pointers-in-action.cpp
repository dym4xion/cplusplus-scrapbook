#include <iostream>
#include <cctype>
using namespace std;

void arrIndex();
void usingPtrs();

int main(){
    arrIndex();
    usingPtrs();

    return 0;
}

void arrIndex(){
    char str[80] = "This Is A Test";

    cout << "original string: " << str << "\n";

    for (int i = 0; str[i]; i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }

    cout << "case inverted string: " << str << "\n";

}

void usingPtrs(){
    char *p;
    char str[80] = "This Is A Test";

    cout << "original string: " << str << "\n";
    
    p = str;
    
    while (*p) {
        if (isupper(*p))
            *p = tolower(*p);
        else if (islower(*p))
            *p = toupper(*p);
        p++;
    }

    cout << "case inverted string: " << str << "\n";
}

// see pg 154 in the textbook for how pointers and arrays are ever more
// similar than you may imagine.
