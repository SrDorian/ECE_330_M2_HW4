#include <iostream>
#include "salaried_employee.hpp"

using namespace std;
//Constructors
Salaried_Employee::Salaried_Employee() : Employee(), monthly_salary{0} , time{1} { }

Salaried_Employee::Salaried_Employee(const long id, const string &last, const string &first, const string &initial,
		   int dept,int msalary, float t) : Employee(id,last,first,initial,dept) , monthly_salary{0} , time{1}{
               set_monthly_salary(msalary);
               set_time(t);

}

//Destructor
Salaried_Employee::~Salaried_Employee(){
}

//Setters
void Salaried_Employee::set_monthly_salary(int msalary) {
    if(msalary<0){
        msalary=0;
    }
    monthly_salary=msalary;
}

void Salaried_Employee::set_time(float t){
    if(time<0){
        time=0;
    }
    time=t;
}

//Getters
int Salaried_Employee::get_monthly_salary() const {
    return monthly_salary;
    
}

float Salaried_Employee::get_time() const {
    return time;
    
}


//Methods
//This is a method that prints the information inside the main and derived class
void Salaried_Employee::print_salary() {
   printEmployee();
   cout << "Fraction of time: "<< get_time() << endl;
   cout << "Employee Salary: "<< calculate_salary() << endl;
}
//This method return the value of the earned salary of the employee
int Salaried_Employee::calculate_salary() {
    float total= time * monthly_salary;
    return total;
}
