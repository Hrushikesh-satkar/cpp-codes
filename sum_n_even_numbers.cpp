// Read N numbers and find the sum of numbers which are even.
#include <iostream>
using namespace std;
int main () {
    int N, input_number, sum_even_numbers = 0;
    cout << "Enter how many numbers you want to add : ";
    cin >> N;
    cout << "Enter your " << N << " numbers" << endl;
    for (int i=1; i<=N; i++) {
        cin >> input_number;
        if(input_number % 2 == 0) {
            sum_even_numbers += input_number;
        }
    }
    cout << "Sum of all the even numbers which you entered is : " << sum_even_numbers << endl;
    return 0;
}