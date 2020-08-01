#include <iostream>
using namespace std;

int running_avg(int i);
void reset();

int main(){
    int num;
    do {
        cout << "Enter nums (-1 to quit, -2 to reset): ";
        cin >> num;
        if (num == -2) {
            reset();
            continue;
        }
        if (num != -1)
            cout << "Running average = " << running_avg(num) << endl;
    } while (num != -1);
    return 0;
}
