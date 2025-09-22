#include <iostream>
#include <vector>  // Needed for std::vector
using namespace std;

void print(int a) {
    cout << a << endl;
}

void print(vector<int> a) {
    for (int x : a) {
        cout << x << ',' << endl;
    }
}

void print(char *arr) {
    cout << arr << endl;
}

int main () {
    int a = 5;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    char carr[] = "abcd";
    
    print(a);      
    print(arr);    
    print(carr);
    
    return 0;
}
