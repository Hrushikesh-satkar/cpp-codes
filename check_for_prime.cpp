#include <iostream>
using namespace std;
int main () {
    int num, is_prime = 0;
    cout << "Enter a number : ";
    cin >> num;
    for(int i = 2; i<=num-1; i++) {
        if(num%i==0) {
            is_prime++;
            break;
        }
    }
    if (is_prime == 1) {
        cout << num << " is NOT a prime number." << endl;
    }
    else {
        cout << num << " is a prime number." << endl;
    }
    return 0;
}