#include <iostream>
using namespace std;

int main(){

    const double PAYTHRESHOLD = 18;
    const double HIGH_WITHHOLDINGRATE = 0.10;
    const double LOW_WITHHOLDINGRATE = 0.05;

    int hours_worked {};
    double hourly_pay {};
    cout << "How many hours did you work and what's your hourly pay?\n";
    cin >> hours_worked >> hourly_pay;

    cout.setf(ios::fixed);
    cout.precision(2);
    double weekly_wage = hourly_pay * hours_worked;
    cout << "You've made $" << weekly_wage << " this week!\n";
    double withholdingrate;
    if (hourly_pay >= PAYTHRESHOLD)
        withholdingrate = HIGH_WITHHOLDINGRATE;
    else 
        withholdingrate = LOW_WITHHOLDINGRATE;
    cout << "You owe $" << weekly_wage * withholdingrate << " in taxes!\n";
}
