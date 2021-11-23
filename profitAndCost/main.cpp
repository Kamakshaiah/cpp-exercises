#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//title - calculation of profit and costs
//objective - to illustrate data types and operators
//
//inputs -
//
//logic -
//
//outputs -

int main()
{

//    inputs

    double fixed_cost = 12.5;
    double variable_cost = (1.5*5);

//    logic
    double total_revenue = 20.0;
    double total_cost = fixed_cost + variable_cost;
    double profit = total_revenue - total_cost;

    cout << "Total revenue is: " << total_revenue << endl;
    cout << "Total cost is: " << total_cost << endl;
    cout << "Profit is: " << profit << endl;

    return 0;
}
