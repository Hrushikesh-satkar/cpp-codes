#include<iostream>
using namespace std;
int main() {
    int arr[10] = {5, 14, 13, 20, 1, 16, 7, 8, 9, 10};
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i<10; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    for(int i = 1; i<10; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    cout << "Highest element in the array is : " << max << endl;
    cout << "Lowest element in the array is : " << min << endl;
    return 0;
}