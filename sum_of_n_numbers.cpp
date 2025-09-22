#include <iostream>
using namespace std;
int main () {
    int N, sum = 0, i=1, input_numbers;
    cout << "Enter how many numbers you want to add : ";
    cin >> N;
    cout << "Enter your " << N << " numbers" << endl;
    while (i <= N) {
        cin >> input_numbers;
        sum += input_numbers;
        i++;
    }
    cout << "The sum of the entered numbers is : " << sum << endl;
    return 0;
}