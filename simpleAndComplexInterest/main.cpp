#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
//    Title - program for simple and compound interest
//    Objective - this program provides illustration to data types and operators
//
//    Inputs -
//
//    p - principal
//    r - interest rate
//    t - time in years
//    n - periods
//
//    Formulas -
//
//    si = p(1+rt)
//    ci = p(1+r/n)^(nt)
//
//    Outputs -
//
//    si in value
//    ci in value

//    inputs
    double p, t, n;
    double r;

    cout << "Input principal (p): " << endl;
    cin >> p;

    cout << "Input rate of interest (r): " << endl;
    cin >> r;

    cout << "Input time duration for ci (n): " << endl;
    cin >> n;

    cout << "Input time period (t in yrs): " << endl;
    cin >> t;

//    logic
    double siA = p*(1+(r*t));
    double ciA = p*(pow((1+(r/n)), n*t));

    double si = siA - p;
    double ci = ciA - p;

//    outputs
    cout << "The total amount is: " << siA << " and simple interest is: " << si << endl;
    cout << "The total amount is: " << ciA << " and compound interest is: " << ci << endl;
    return 0;
}
