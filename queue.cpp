#include <iostream>
using namespace std;

const int maxQSize = 100;

template <class T> class Queue {
    T q[maxQSize];
    int size, pushloc, poploc;
    public:
        Queue(int len); 
        void push(T qElem); 
        T pop();
};

template<class T> Queue<T>::Queue(int len) {
    if (len > maxQSize) len = maxQSize;
    else if (len <= 0) len = 1;
    size = len;
    pushloc = poploc = 0;
}
        
template<class T> void Queue<T>::push(T qElem) {
    if (pushloc == size) {
        cout << "-- queue is full --" << endl;
        return;
    }
    pushloc++;
    q[pushloc] = qElem;
}
        
template<class T> T Queue<T>::pop() {
    if (poploc == pushloc) {
        cout << "-- queue is empty --" << endl;
        return 0;
    }
    poploc++;
    return q[poploc];
}

int main(){
    Queue<char> q(5);
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
    
    Queue<int> r(5);
    r.push(1);
    r.push(2);
    r.push(3);
    r.push(4);
    r.push(5);
    r.push(6);
    int d = r.pop();
    cout << d << endl;
    d = r.pop();
    cout << d << endl;
    d = r.pop();
    cout << d << endl;
    d = r.pop();
    cout << d << endl;
    d = r.pop();
    cout << d << endl;
    d = r.pop();
    cout << d << endl;
    
    return 0;
}
