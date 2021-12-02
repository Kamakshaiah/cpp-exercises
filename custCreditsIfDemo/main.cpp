#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "\n" << endl;

    double amt;
    int cdt;

    cout << "Enter transaction amount!" << endl;
    cin >> amt;

    if (amt <= 1000){
        cout << "Your earned credits are: " << amt * 0.01 << endl;
    } else if (amt > 1000 && amt <= 5000){
        cout << "Your earned credits are: " << amt * 0.02 << endl;
    } else if (amt > 5000 && amt <= 10000){
        cout << "Your earned credits are: " << amt * 0.02 << endl;
    } else {
        cout << "Forwarded to Manager for spl. consideration!" << endl;
    }
    return 0;
}
