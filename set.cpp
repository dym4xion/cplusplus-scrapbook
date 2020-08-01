#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Set {
    int len;
    char members[MAX_SIZE];
    int find(char ch);
    

public:
        Set() { len = 0; }
        int getLength() { return len; }
        void showSet();
        bool isMember(char ch);
        
        // operator overloading
        Set operator +(char ch);
        Set operator -(char ch);
        Set operator +(Set ob2);
        Set operator -(Set ob2);
};

int Set::find(char ch) {
    for (int i = 0; i < len; i++)
        if (ch == members[i]) return i;
    return -1;
}

void Set::showSet(){
   if (len == 0) cout << "{ }" << endl;
   else {
        cout << "{ ";
        for (int i = 0; i < len; i++)
             cout << members[i] << ", ";
        cout << "\b\b }" << endl;
   }    
}

bool Set::isMember(char ch){
    if (find(ch) == -1) return false;
    else {return true;}
}

Set Set::operator +(char ch){
    Set newset;
    if (len == MAX_SIZE){
        cout << "set at max size." << endl;
        return *this;
    }
    
    newset = *this;

    if (isMember(ch)) {
        cout << ch << " is already in set." << endl;
    } else {
        newset.members[len] = ch;
        newset.len++;
    }
    return newset;
}

Set Set::operator -(char ch){
    Set newset;
    if (isMember(ch)) {
        newset = *this;
        int targetIndex = newset.find(ch);
        newset.members[targetIndex] = newset.members[len - 1];
        newset.members[len - 1] = 0;
        newset.len--;
    } else {
        cout << ch << " is not in the set.";
        newset = *this;
    }
    return newset;
}

Set Set::operator +(Set ob2){
    Set newset = *this;
    for (int i = 0; i < ob2.len; i++)
        newset = newset + ob2.members[i];
    return newset;
}

Set Set::operator -(Set ob2){
    Set newset = *this;
    for (int i = 0; i < ob2.len; i++)
        newset = newset - ob2.members[i];
    return newset;
}

int main(){
    Set a = Set();
    a = a + 'A';
    a = a + 'B';
    a = a + 'C';
    cout << "Set A: ";
    a.showSet();

    Set b = Set();
    b = b + 'L';
    b = b + 'M';
    b = b + 'N';
    cout << "Set B: ";
    b.showSet();

    Set c = Set();
    c = c + 'X';
    c = c + 'Y';
    c = c + 'Z';
    cout << "Set C: ";
    c.showSet();
    
    Set d = a + b;
    cout << "Set D = A + B: ";
    d.showSet();
    
    Set e = a + c;
    cout << "Set E = A + C: ";
    e.showSet();
    
    Set f = b + c;
    cout << "Set F = B + C: ";
    f.showSet();
    
    Set g = a + b + c;
    cout << "Set G = A + B + C: ";
    g.showSet();
    
    Set ap = a - a;
    cout << "Set A\' = A - A: ";
    ap.showSet();
    
    return 0;
}
