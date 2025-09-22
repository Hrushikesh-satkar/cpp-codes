#include <iostream>
using namespace std;
int main () {
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    if (marks >=81 && marks <= 100) {
        cout << "Your grade is A" << endl;
    }
    else if (marks >=61 && marks <= 80) {
        cout << "Your grade is B" << endl;
    }
    else if (marks >=41 && marks <= 60) {
        cout << "Your grade is C" << endl;
    }
    else if (marks >= 0 && marks <=40) {
        cout << "Your grade is D" << endl;
    }
    else {
        cout << "Please enter valid marks." << endl;
    }
    return 0;
}