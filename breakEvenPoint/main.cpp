#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//title - calculation of break even point
//objective - to illustrate data types and operators
//
//inputs -
//
//logic -

//break even point = (fixed_cost/gross profit margin)
//    if fixed cost = 1 million
//    gross profit margin = 37%
//    break even point = 1 ml/0.37
//
//many units need to be sold to cover the fixed costs, which will result in the company breaking even.
//
//sales price = Rs. 50
//variable cost = Rs/ 10
//
//contribution margin = 50 - 10
//
//break eaven point = fixed cost / contribution margin

//outputs -

int main()
{
    double fixed_cost = 100000;
    double variable_cost_pu = 10;
    double no_of_units = 100;
    double margin = 5;
    double CoGS = 1000/no_of_units;

    double sales_price = (fixed_cost / no_of_units) + variable_cost_pu + margin;
    double sales_revenue = sales_price * no_of_units;
    double total_variable_cost = (variable_cost_pu * no_of_units);
    double gross_profit_margin = (sales_revenue - CoGS)/sales_revenue;
    double contribution_margin = (sales_revenue - total_variable_cost)/100;

    double bep_r = fixed_cost / gross_profit_margin;
    double bep_u = fixed_cost / contribution_margin;

    cout << bep_r << endl;
    cout << bep_u << endl;

    return 0;
}
