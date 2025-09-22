#include <iostream>
using namespace std;

class Employee {
public: 
    string name;
    int ID;
    float salary;

    Employee(string name, int ID, float salary) {
        this->name = name;
        this->ID = ID;
        this->salary = salary;
    }

    void displayInfo() {
        cout << "Name : " << name << endl;
        cout << "ID : " << ID << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main() {
    Employee* emp[5]; 

    for(int i = 0; i < 5; i++) {
        string name;
        int ID;
        float salary;
        cout << "Enter name for Employee " << i+1 << " : ";
        cin >> name;
        cout << "Enter ID for Employee " << i+1 << " : ";
        cin >> ID;
        cout << "Enter Salary for Employee " << i+1 << " : ";
        cin >> salary;

        emp[i] = new Employee(name, ID, salary); 
    }

    cout << "\nEmployee Details are:\n";
    for(int i = 0; i < 5; i++) {
        emp[i]->displayInfo();
        cout << endl;
    }

    return 0;
}
