/* File: test.cpp */
// File to test the basic employee class

#include <iostream>
#include <string>
#include "salaried_employee.hpp"
#include "hourlyemployee.hpp"

using namespace std;

int main() 
{
  //Here we are creating Salaried_employee objects in this form:
  //Salaried Employee object(id, last name, name, middle initial, department code
  // monthly salary, fraction of time worked (monthly) )
  Salaried_Employee
  se1 (001, "Jones", "Booker", "T", 22, 1500, 12),
  se2 (002, "Hendrix", "Jimi", "NMI ", 14, 2050, 6);

  se1.print_salary();
  se2.print_salary();
  
  //Here we are creating Salaried_employee objects in this form:
  //Salaried Employee object(id, last name, name, middle initial, department code
  //hourly rate, hours worked, extra hours worked )
  Hourly_Employee
  he1 (007, "Jovi", "Jon", "Bon", 77, 50, 40, 8),
  he2 (016, "Cobain", "Kurt", "", 42, 20, 60, 12);

  he1.print_salary();
  he2.print_salary();
  return 0;
  
}
