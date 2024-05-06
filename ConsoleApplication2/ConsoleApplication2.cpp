#include <iostream>

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}

int daysDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeapYear(year1))
        daysInMonth[1] = 29;

    int days1 = day1;
    for (int i = 0; i < month1 - 1; ++i)
        days1 += daysInMonth[i];

    int days2 = day2;
    for (int i = 0; i < month2 - 1; ++i)
        days2 += daysInMonth[i];

    int totalDays1 = days1 + 365 * (year1 - 1) + (year1 - 1) / 4 - (year1 - 1) / 100 + (year1 - 1) / 400;
    int totalDays2 = days2 + 365 * (year2 - 1) + (year2 - 1) / 4 - (year2 - 1) / 100 + (year2 - 1) / 400;

    return std::abs(totalDays2 - totalDays1);
}

int main() {
    int day1 = 1, month1 = 1, year1 = 2024;
    int day2 = 10, month2 = 5, year2 = 2024;
    std::cout << "Difference in days: " << daysDifference(day1, month1, year1, day2, month2, year2) << std::endl;
    return 0;
}
