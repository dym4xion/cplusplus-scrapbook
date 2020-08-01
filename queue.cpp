#include <iostream>
using namespace std;

const int maxQSize = 100;

class Queue {
    char q[maxQSize];
    int size, pushloc, poploc;
    public:
        Queue(int len);
        void push(char ch);
        char pop();
};

Queue::Queue(int len) {
    if (len > maxQSize) len = maxQSize;
    else if (len <= 0) len = 1;
    size = len;
    pushloc = poploc = 0;
}

void Queue::push(char ch) {
    if (pushloc == size) {
        cout << "-- queue is full --" << endl;
        return;
    }
    pushloc++;
    q[pushloc] = ch;
}

char Queue::pop() {
    if (poploc == pushloc) {
        cout << "-- queue is empty --" << endl;
        return 0;
    }
    poploc++;
    return q[poploc];
}

int main(){
    Queue q = 5;
    q.push('Q');
    q.push('U');
    q.push('E');
    q.push('U');
    q.push('E');
    q.push('S');
    char c = q.pop();
    cout << c << endl;
    c = q.pop();
    cout << c << endl;
    c = q.pop();
    cout << c << endl;
    c = q.pop();
    cout << c << endl;
    c = q.pop();
    cout << c << endl;
    c = q.pop();
    cout << c << endl;
    return 0;
}
