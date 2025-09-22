// Average of 5 numbers.
#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int num1, num2, num3, num4, num5;
    cout << "Enter 5 numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    int sum = num1 + num2 + num3 + num4 + num5;
    float avg = sum/5;
    cout << fixed << setprecision(4) << "Average is " << avg <<endl;
    return 0;
}