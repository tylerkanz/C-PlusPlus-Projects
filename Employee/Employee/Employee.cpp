#include "Employee.h"
#include "Date.h"


Employee::Employee(string first, string last, unsigned int id, int m, int d, int y) : start_date(m,d,y) 
{
	first_name = first;
	last_name = last;
	emp_id = id;

}

void Employee::print_employee() const
{
	cout << "Employee ID         :" << emp_id << endl;
	cout << "Employee First Name :" << first_name << endl;
	cout << "Employee Last Name  :" << last_name << endl;
	cout << "Employee Start Date :";
	start_date.print_date();
}

void Employee::calc_probationary_date(int m, int d, int y)
{
	start_date;
	int d + 90;
}

Employee::~Employee(void)
{
}
