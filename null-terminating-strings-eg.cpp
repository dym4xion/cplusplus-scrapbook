#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char str[80];
    strcpy(str, "i am a string");

    for (int i = 0; str[i]; i++) str[i] = toupper(str[i]);

    cout << str;

    cout << "\n";
    return 0;
}
