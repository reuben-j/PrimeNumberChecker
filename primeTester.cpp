#include <iostream>

using namespace std;

bool primeChecker(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i < num -1; i++) {
        
        if(num % i == 0) {
            cout << i << endl;

            return false;
        }
    } return true;
}

int main() {
    int num;
    cout << "What number would you like to check? ";
    cin >> num;
    if(primeChecker(num)!= 0) {
        cout << num << " is prime!";
    } else {
        cout << num << " is not prime :(";
    }
}