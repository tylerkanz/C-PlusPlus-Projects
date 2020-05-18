#pragma once
#include "Date.h"

#pragma once
class Employee
{
public:
	Employee(string, string, unsigned int, int, int, int);
	void calc_probationary_date(int m, int d, int y);
	void print_employee() const;
	~Employee(void);
private:
	Date start_date;
	unsigned int emp_id;
	string first_name, last_name;
};

