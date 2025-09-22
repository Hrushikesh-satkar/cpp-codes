#include <iostream>
using namespace std;
int fact(int n) {
    int fact = 1;
    for(int i=n; i>=1; i--) {
        fact *= i;
    }
    return fact;
}
int main () {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int factorial = fact(num);
    cout << "Factorial of " << num << " is : " << factorial << endl;
    return 0;
}