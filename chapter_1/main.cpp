#include <iostream>
using namespace std;

int main(){
    const double PAYTHRESHOLD = 18;
    const double HIGH_WITHHOLDINGRATE = 0.10;
    const double LOW_WITHHOLDINGRATE = 0.05;

    cout << "How many hours did you work? \n";
    int hours_worked {};
    cin >> hours_worked; 

    cout << "What's your hourly pay? \n";
    double hourly_pay {};
    cin >> hourly_pay;

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
