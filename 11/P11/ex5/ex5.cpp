#include <iostream>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

void read_hours_worked(vector<Employee *> &employees){
    for (size_t i = 0; i < employees.size(); i++){
        if (employees[i]->get_rate()){
            double hours;
            cin >> hours;
            ((HourlyEmployee *)employees[i])->set_hours(hours);
        }
    }
}

void calculate_pay(vector<Employee*>& employees){
    for (size_t i = 0; i < employees.size(); i++){
        employees[i]->calculate_net_pay();
    }
}

void print_checks(const vector<Employee*>& employees){
    cout<<"|";
    for (size_t i = 0; i < employees.size(); i++){
        cout << " ";
        employees[i]->print_check();
        cout << " ";
    }
    cout << "|" << endl;
}