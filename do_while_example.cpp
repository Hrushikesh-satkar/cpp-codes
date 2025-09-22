// Read numbers until I don't get a negative number.
#include <iostream>
using namespace std;
int main () {
    int input_number;
    cout << "Start entering numbers" << endl;
    do {
        cin >> input_number;
    }
    while(input_number>=0);
    cout << "Program ended because you entered a negative number." << endl;
    return 0;
}