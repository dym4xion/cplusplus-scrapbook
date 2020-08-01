#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double loanAmount, intRate, paysPY, numYears, regPay;
    
    cout << "Enter loan amount: ";
    cin >> loanAmount;

    cout << "Enter interest rate: ";
    cin >> intRate;

    cout << "Enter number of yearly payments: ";
    cin >> paysPY;
    
    cout << "Enter number of years: ";
    cin >> numYears;
    
    double numer, denom;
    numer = intRate * (loanAmount / paysPY);
    double base, exp;
    base = ((intRate / paysPY) + 1);
    exp = -(paysPY * numYears);
    denom = 1 - pow(base, exp);

    regPay = numer / denom ;
    
    cout << "Regular payment amount is: " << regPay << "\n";
    cout << "Total amount paid: " << regPay*paysPY*numYears << "\n";
    cout << "Total interest paid: " << (regPay*paysPY*numYears) - loanAmount << "\n";
    
    cout << "\n";
    return 0;
}
