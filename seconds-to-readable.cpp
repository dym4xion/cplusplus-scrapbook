#include <iostream>
using namespace std;

int main(){
    cout << "Enter amount in seconds (int): ";
    int secsIn;
    cin >> secsIn;
    
    int days = secsIn / (24*3600);
    int hrs = (secsIn % (24*3600)) / 3600;
    int mins = (secsIn % 3600) / 60;
    int secs = secsIn % 60;
    cout << secsIn << " seconds is : " << days << "days "
                                       << hrs << "hrs " 
                                       << mins << "m " 
                                       << secs <<"s";
    
    cout << "\n";
    return 0;
}
