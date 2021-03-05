#include <iostream>
#include "hourlyemployee.hpp"

using namespace std;

//Constructors
Hourly_Employee::Hourly_Employee() : Employee(), hours{0}, overtime_hours{0}, hourly_rate{0} {
}

Hourly_Employee::Hourly_Employee(const long id, const string &last, const string &first, const string &initial,
		   int dept, int hrate,int h, int oh) : Employee(id,last,first,initial,dept) , hours{0}, overtime_hours{0}, hourly_rate{0} {
               set_hours(h);
               set_overtime_hours(oh);
               set_hourly_rate(hrate); 
}

//Destructors
Hourly_Employee::~Hourly_Employee() { 
}

//Setter
void Hourly_Employee::set_hours(int h){
    if(h<0){
        h=0;
    }
    hours=h; 
}

void Hourly_Employee::set_overtime_hours(int oh){
     if(oh<0){
        oh=0;
    }
    overtime_hours=oh; 
}

void Hourly_Employee::set_hourly_rate(int hrate){
     if(hrate<0){
        hrate=0;
    }
    hourly_rate=hrate; 
}

//Getters
int Hourly_Employee::get_hours() const {
    return hours;
}

int Hourly_Employee::get_overtime_hours() const {
    return overtime_hours;
}

int Hourly_Employee::get_hourly_rate() const {
    return hourly_rate;
}

void Hourly_Employee::print_salary(){
    printEmployee();
    cout << "Hours worked: "<< get_hours() << endl;
    cout << "Extra-hours worked: "<< get_overtime_hours() << endl;
    cout << "Employee Salary: "<< calculate_salary() << endl;
}

int Hourly_Employee::calculate_salary() {
    float total= (hours*hourly_rate) + (overtime_hours*1.5*hourly_rate);
    return total;
}  
