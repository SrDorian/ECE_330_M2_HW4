#include "employee.hpp"

class Salaried_Employee : public Employee {
    
    private:
        int monthly_salary;
        float time;

    public: 
        //Constructors
        Salaried_Employee();
        Salaried_Employee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, int =0, float =1);

        //Destructor
        ~Salaried_Employee();

        //Setters
        void set_monthly_salary(int msalary);
        void set_time(float t);

        //Getters
        int get_monthly_salary() const;
        float get_time() const;
        //Methods
        void print_salary();
        int calculate_salary();



};