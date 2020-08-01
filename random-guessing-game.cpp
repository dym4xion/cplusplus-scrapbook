#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    int max = 1000;
    int secret, guess, attempts = 0;
    
    srand(time(NULL));
    secret = rand() % max + 1;
    
    do {
        cout << "Guess a number from 1 to " << max << " : ";
        cin >> guess;
        attempts++;
        if (guess > secret) cout << "Too big, guess again!\n";
        else if (guess < secret) cout << "Too small, guess again!\n";
    } while (guess != secret);
    
    if (attempts == 1) cout << "Hole in 1! You got it!";
    else {cout << "You got it! It took " << attempts << " attempts.";}

    cout << "\n";
    return 0;
}
