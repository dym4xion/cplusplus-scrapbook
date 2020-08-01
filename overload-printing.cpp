#include <iostream>
using namespace std;

void print(bool b);
void print(int i);
void print(long l);
void print(char ch);
void print(char *str);
void print(double d);

void println(bool b);
void println(int i);
void println(long l);
void println(char ch);
void println(char *str);
void println(double d);

int main(){
    return 0;
}


void print(bool b){
    cout << b;
}

void print(int i){
    cout << i;
}

void print(long l){
    cout << l;
}

void print(char ch){
    cout << ch;
}

void print(char *str){
    cout << str;
}

void print(double d){
    cout << d;
}



void println(bool b){
    cout << b << "\n";
}

void println(int i){
    cout << i << "\n";
}

void println(long l){
    cout << l << "\n";
}

void println(char ch){
    cout << ch << "\n";
}

void println(char *str){
    cout << str << "\n";
}

void println(double d){
    cout << d << "\n";
}
