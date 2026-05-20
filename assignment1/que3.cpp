#include <iostream>
#include <string>
using namespace std;

struct Employee {
    // Data members
    int empID;
    string empName;
    float empSalary;

    // Function to accept data
    void AcceptData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        
        cout << "Enter Employee Name: ";
        cin.ignore(); // Clears the input buffer
        getline(cin, empName);
        
        cout << "Enter Employee Salary: ";
        cin >> empSalary;
    }

    // Function to print data
    void printData() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID: " << empID << endl;
        cout << "Name: " << empName << endl;
        cout << "Salary: " << empSalary << endl;
    }
};

int main() {
    // Create an object of Employee struct
    Employee emp;

    // Call the member functions
    emp.AcceptData();
    emp.printData();

    return 0;
}






