// Restaurant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double meal_cost, tip_percentage, tip_amount, total_cost, cost_per_person, tip_per_person;
    int num_people;

    cout << "Enter the total meal cost: \x9c";
    cin >> meal_cost;

    cout << "Enter the tip percentage (as a decimal): ";
    cin >> tip_percentage;

    cout << "Enter the number of people: ";
    cin >> num_people;

    tip_amount = meal_cost * (tip_percentage/100);
    tip_per_person = tip_amount / num_people;
    total_cost = meal_cost + tip_amount;
    cost_per_person = meal_cost / num_people;

    cout << fixed << setprecision(2);
    cout << "The total cost of the meal is \x9c" << total_cost << endl;
    cout << "The cost per person (Without tip) is \x9c" << cost_per_person << endl;
    cout << "The Cost of the tip per person is \x9c" << tip_per_person << endl;

    return 0;
}
