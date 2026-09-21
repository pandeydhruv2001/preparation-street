#include <iostream>
#include <string>
using namespace std;

string getDayOfWeek(int day, int month, int year) {
    // Adjust months: Jan and Feb are counted as months 13 and 14 of the previous year
    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }

    int q = day;
    int m = month;
    int K = year % 100;      // year of the century
    int J = year / 100;      // zero-based century

    // Zeller's Congruence formula
    int h = (q + (13*(m + 1))/5 + K + K/4 + J/4 + 5*J) % 7;

    // h = 0 → Saturday, 1 → Sunday, 2 → Monday, ..., 6 → Friday
    string days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    return days[h];
}

int main() {
    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    string weekday = getDayOfWeek(day, month, year);
    cout << "Day of the week: " << weekday << endl;

    return 0;
}
