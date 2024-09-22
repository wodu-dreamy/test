#include<stdio.h>
#define MONTH_COUNT 12

int get_days_in_month(int month, int year);

int is_leap_year(int year);

int main() {

	int res_day = get_days_in_month(12, 2024);  

	printf("%d", res_day);
	return 0;
}



int get_days_in_month(int month,int year) {
	const int days_in_month[MONTH_COUNT] = {
		31,
		is_leap_year(year) ? 29 : 28,
		31, 30, 31 ,30, 31, 31, 30, 31, 30,31
	};
	return days_in_month[month - 1];
}

int is_leap_year(int year) {

	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
