#include<iostream>
using namespace std;

void waveprint(int arr[][5], int rows, int cols) {
    for(int col = 0; col <cols; col++) {
        if(col%2==0) {
            for(int row = 0; row<rows; row++) {
                cout << arr[row][col] << " ";
            } 
        } else {
            for(int row = rows-1; row >=0; row--) {
                cout << arr[row][col] << " ";
            } 
        }
        }
    }

int main() {
    int arr[5][5];
    cout << "Enter the number of rows and columns : ";
    int rows, cols;
    cin >> rows >> cols;
    cout << "Enter the array elements" << endl;
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "The array is " << endl;
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Wave printed array is " << endl;
    waveprint(arr, rows, cols);
    return 0;
}