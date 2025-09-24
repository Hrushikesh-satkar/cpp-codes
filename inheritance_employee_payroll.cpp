#include <iostream>
using namespace std;
class Employee {
protected :
   string emp_name;
   int emp_id;
   string address;
   string mail_id;
   int mobile_no;
   float BP, DA, HRA, PF, staff_club_fund;


   void input() {
       cout << "Enter your name : ";
       cin >> emp_name;
       cout << "Enter your Employee ID : ";
       cin >> emp_id;
       cout << "Enter your address : ";
       cin >> address;
       cout << "Enter your mail id : ";
       cin >> mail_id;
       cout << "Enter your Mobile no : ";
       cin >> mobile_no;
       cout << "Enter your Basic Pay (BP) : ";
   }


   void calculate_salary_components(float Basic_pay) {
       DA = 0.97 * Basic_pay;
       HRA = 0.10 * Basic_pay;
       PF = 0.12 * Basic_pay;
       staff_club_fund = 0.001 * Basic_pay;
   }


   void display() {
       cout << "Name : " << emp_name << endl;
       cout << "ID : " << emp_id << endl;
       cout << "Address : " << address << endl;
       cout << "Mail ID : " << mail_id << endl;
       cout << "Mobile number : " << mobile_no << endl;
       cout << "Basic Pay : " << BP << endl;
       cout << "Dear Allowance : " << DA << endl;
       cout << "House Rent Allowance : " << HRA <<endl;
       cout << "Provident fund : " << PF << endl;
       cout << "Staff club fund : " << staff_club_fund << endl;
   }

public : 
        static int count_emp;
};

int Employee::count_emp = 0;

class Programmer : public Employee {
public :
   string role = "Programmer";
   Programmer () {
       input();
       calculate_salary_components(BP);
       display();
       count_emp++;
   }
};


class Team_lead : public Employee {
public :
   string role = "Team leader";
   Team_lead () {
       input();
       calculate_salary_components(BP);
       display();
       count_emp++;
   }
};


class Assistant_project_manager : public Employee {
public :
   string role = "Assistant project manager";
   Assistant_project_manager () {
       input();
       calculate_salary_components(BP);
       display();
       count_emp++;
       role = "x";
   }
};


class Project_manager : public Employee {
public :
    string role = "Project Manager";
    Project_manager () {
        input();
        calculate_salary_components(BP);
        display();
        count_emp++;
    }
};