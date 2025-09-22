#include <iostream>
using namespace std;
int main () {
    cout << "Enter a number : ";
    int num, reversednum = 0, remainder=0;
    cin >> num;
    int originalnum = num;
    while(num > 0) {
        remainder = num%10;
        reversednum = (reversednum*10) + remainder;
        num /= 10;
    }
    if (originalnum == reversednum) {
        cout << originalnum << " is a palindrome" << endl;
    } else {
        cout << originalnum << " is not a palindrome" << endl;
    }
}