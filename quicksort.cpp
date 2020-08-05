#include <iostream>
#include <cstring>
using namespace std;

template <class T> void qs(T a[], int left, int right){
    int i, j;
    T x, y;

    i = left; 
    j = right;

    x = a[(left+right) / 2];

    do{
        while ((a[i] < x) && (i < right)) i++;
        while ((x < a[j]) && (j > left)) j--;

        if (i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++; j--;
        }
    } while (i <- j);

    if (left < j) qs(a, left, j);
    if (i < right) qs(a, i, right);
}

template <class T> void quicksort(T a[], int len){
   qs(a, 0, len - 1); 
}

int main(){
    // sort a string
    char str[] = "thequickbrownfoxjumpedoverthelazydog";
    cout << "original order: " << str << endl;
    quicksort(str, strlen(str));
    cout << "sorted order: " << str << endl;

    // sort an int arr
    int arr[] = {1, 0, 2, 9, 3, 8, 4, 7, 5, 6};
    cout << "original order: ";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << endl;
    quicksort(arr, 10);
    cout << "sorted order: ";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << endl;

    // sort a double arr
    double darr[] = {1.1, 0.3, 2.5, 9.6, 3.35, 8.61, 4.007, 7.4, 5.0, 6.1};
    cout << "original order: ";
    for (int i = 0; i < 10; i++) cout << darr[i] << " ";
    cout << endl;
    quicksort(darr, 10);
    cout << "sorted order: ";
    for (int i = 0; i < 10; i++) cout << darr[i] << " ";
    cout << endl;


    return 0;
}
