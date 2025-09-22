#include <iostream>
using namespace std;
class Student {
public :
    string name;
    int marks[3];
    void input() {
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter marks in three subjects" << endl;
        for(int i = 0; i<3; i++) {
            cin >> marks[i];
        } 
    }
    void display() {
        cout << "Name : " << name << endl;
        int avg;
        avg = average(marks);
        cout << "average is : " << avg;
    }
private : 
    int  average(int marks[]) {
            int average, sum = 0;
            for(int i = 0; i<3; i++) {
                sum += marks[i];
            }
            average = sum/3;
            return average;
        }
};

int main() {
    Student s1;
    s1.input();
    s1.display();
    return 0;
}