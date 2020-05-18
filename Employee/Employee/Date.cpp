#include "Date.h"


Date::Date(int m, int d, int y)
{
	switch(m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if((d <=31) && (d > 0))
		{
			month = m;
			day = d;
			year = y;
			break;
		}

	case 4: case 6: case 9: case 11:
		if((d <= 30) && (d > 0))
		{
			month = m;
			day = d;
			year = y;
			break;
		}

	case 2:
        if((leapyear(y)) && (d <= 29 && d > 0))
		{
			month = m;
			day = d;
			year = y;
			break;
		}
		else if ((!(leapyear(y))) && (d <=28 && d > 0))
		{
			month = m;
			day = d;
			year = y;
			break;
		}

	default:
		cerr << "Invalid date!! ";
		month = m;
		day = d;
		year = y;
		print_date();
		break;
	} //end switch
}

void Date::print_date() const
{
  cout << month << "-" << day << "-" << year << endl;
}

bool Date::leapyear(int y) // helper function
{
	if(y % 100 == 0)
		return (y % 400 == 0);
	else
	    return (y % 4 == 0);
}


Date::~Date(void)
{
}
