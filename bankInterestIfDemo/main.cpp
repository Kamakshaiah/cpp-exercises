#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int custAge;
    double dpstAmnt;

    cout << "What is the deposit amount!" << endl;
    cin >> dpstAmnt;

    cout << "What is the customer age!" << endl;
    cin >> custAge;

    if (dpstAmnt >= 150000 && custAge <= 30){
        cout << "Annual return: " << dpstAmnt*(0.5) << endl;
    } else if (dpstAmnt >= 150000 && (custAge > 30 && custAge <= 50)){
        cout << "Annual return: " << dpstAmnt*(0.6) << endl;
    } else if (dpstAmnt >= 150000 && (custAge > 50 && custAge <= 60)){
        cout << "Annual return: " << dpstAmnt*(0.7) << endl;
    } else if (dpstAmnt >= 150000 && custAge > 60){
        cout << "Annual return: " << dpstAmnt*(0.8) << endl;
    }
    return 0;
}
