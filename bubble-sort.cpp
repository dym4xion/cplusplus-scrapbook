#include <iostream>
using namespace std;

int main(){
    // you cannot simply assign one array to another. you must do every elem.
    // arrays in c++ feature no bounds checking. so be very careful

    int arr[10];
    arr[0] = 55;
    arr[1] = 3;
    arr[2] = 12;
    arr[3] = 900;
    arr[4] = 67;
    arr[5] = 32;
    arr[6] = 1;
    arr[7] = 0;
    arr[8] = 368;
    arr[9] = 87;

    cout << "Original Array" << "\n";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << "\n";

    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }


    
    cout << "Sorted Array" << "\n";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";

    cout << "\n";
    return 0;
}
