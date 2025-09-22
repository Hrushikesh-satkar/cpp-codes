#include <iostream>
using namespace std;
class Swap {
public : 
    void swap_value(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void swap_reference(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void print_values(int a, int b) {
        cout << "a : " << a << ", b : " << b << endl;
    }
};

int main() {
    int a = 5, b = 10;
    Swap s1;
    cout << "Initially ";
    s1.print_values(a, b);
    s1.swap_value(a, b);
    cout << "After call by value the swapped values are : ";
    s1.print_values(a, b);
    s1.swap_reference(&a, &b);
    cout << "After call by reference the swapped values are : ";
    s1.print_values(a, b);
    return 0;
}