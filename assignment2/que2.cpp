/*Q2: Update TDate class

i> Add setter and getter for day ,month and year
ii> update PrintDate() function using cout
iii> update AcceptDate() function using cin,cout
*/

#include <iostream>
using namespace std;

class TDate
{
private:
    int day;
    int month;
    int year;

public:
    // Setter functions
    void setDay(int d)
    {
        day = d;
    }

    void setMonth(int m)
    {
        month = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    // Getter functions
    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    // Accept date using cin
    void AcceptDate()
    {
        cout << "Enter Day : ";
        cin >> day;

        cout << "Enter Month : ";
        cin >> month;

        cout << "Enter Year : ";
        cin >> year;
    }

    // Print date using cout
    void PrintDate()
    {
        cout << "\nDate : "
             << day << "/"
             << month << "/"
             << year << endl;
    }
};

int main()
{
    TDate d1;

    d1.AcceptDate();

    d1.PrintDate();

    cout << "\nUsing Getter Functions :" << endl;
    cout << "Day   : " << d1.getDay() << endl;
    cout << "Month : " << d1.getMonth() << endl;
    cout << "Year  : " << d1.getYear() << endl;

    return 0;
}
