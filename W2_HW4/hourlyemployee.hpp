#include "employee.hpp"

class Hourly_Employee : public Employee {
    
    private:
        int hours,overtime_hours, hourly_rate;

    public:
        //Constructors
        Hourly_Employee();
        Hourly_Employee(long = 0, const string & ="" , const string & ="", const string & = "",int =0, int =0, int =0, int=0);

        //Destructor
        ~Hourly_Employee();

        //Setters
        void set_hours(int h);
        void set_overtime_hours(int oh);
        void set_hourly_rate(int hrate);
        

        //Getters
        int get_hours() const;
        int get_overtime_hours() const;
        int get_hourly_rate() const;
    
        //Methods
        void print_salary();
        int calculate_salary();



};