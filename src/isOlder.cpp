/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/


int isOlder(char *dob1, char *dob2) {
	int date1 = 0, date2 = 0, month1 = 0, month2 = 0, year1 = 0, year2 = 0, flag = 0, iterator, leap=0;
	int valid = 0;

	for (iterator = 0; dob1[iterator] != '\0'; iterator++)
	{
		if (dob1[iterator] == '-')
		{
			flag++;
			continue;
		}
		if (flag == 0)
		{
			date1 = date1 * 10 + (dob1[iterator] - '0');
			date2 = date2 * 10 + (dob2[iterator] - '0');
		}
		if (flag == 1)
		{
			month1 = month1 * 10 + (dob1[iterator] - '0');
			month2 = month2 * 10 + (dob2[iterator] - '0');
		}
		if (flag == 2)
		{
			year1 = year1 * 10 + (dob1[iterator] - '0');
			year2 = year2 * 10 + (dob2[iterator] - '0');
		}

	}
	if (date2 == 0)
		return -1;
	if ((year1 % 400 == 0 || (year1 % 100 != 0 && year1 % 4 == 0)))
	{
		leap = 1;
	}
	if (leap != 1)
	{
		if ((month1 == 2) || (month2 == 2))
		{
			if ((date1 >= 29) || (date2 >= 29))
				return -1;
		}
	}
	if (month1<13 && month2<13)
	{
		if ((month1 == 1 || (3 || (5 || (7 || (8 || (10 || (12))))))) && (month2 == 1 || (3 || (5 || (7 || (8 || (10 || (12))))))))
		{
			if (date1 <= 31 || date2 <= 31)
			{
				valid = 1;
			}
		}
		else if ((month1 == 4 || (6 || (9 || (11)))) && (month2 == 4 || (6 || (9 || (11)))))
		{
			if ((date1 <= 30) || (date2 <= 30))
			{
				valid = 1;
			}
		}
		else
		{
			if (leap == 1)
			{
				if ((date1 <= 29) || (date2 <= 29))
				{
					valid = 1;
				}
			}
			if (leap == 0)
			{
				if ((date1 <= 28) || (date2 <= 28))
				{
					valid = 1;
				}
			}
		}
	}
	if (valid != 1)
		return -1;
	else
	{
		if (year1>year2)
			return 2;
		else if (year1<year2)
			return 1;
		else
		{
			if (month1>month2)
				return 2;
			else if (month1<month2)
				return 1;
			else
			{
				if (date1>date2)
					return 2;
				else if (date1<date2)
					return 1;
				else
					return 0;
			}

		}

	}
	}
