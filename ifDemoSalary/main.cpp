#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    double income;
    bool tax;
    string ownhouse;


    cout << "Income: " << endl;
    cin >> income;
    cout << "Tax (true/false): " << endl;
    cin >> tax;
    cout << "Own house (yes/no): " << endl;
    getline(cin, ownhouse);

    cout << income << endl;
    cout << tax << endl;
    cout << ownhouse << endl;

//    if ((income <= 2) && (tax == false) ){
//            if (ownhouse == "no"){
//                    cout << "Eligible for rations through white card." << endl;
//            }
//
//    } else if (income > 2 && income <= 5){
//        cout << "Eligible for rations through pink card." << endl;
//    } else {
//        cout << "You are not eligible for rations." << endl;
//    }
    return 0;
}
