#include <iostream>
#include <cstring>
using namespace std;


int main(){
    char str[] = "racecar";
    char *start, *end;
    int len;
    char temp;
    
    cout << "original: " << str << "\n";
    
    len = strlen(str);
    start = str;
    end = &str[len - 1];
    
    while (start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "reversed: " << str << "\n";
    return 0;
}
