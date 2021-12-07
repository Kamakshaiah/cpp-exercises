#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
//    inputs
    cout << "Hello world!" << endl;

    string male[3];
    string female[3];

    string gend[6] = {"male", "female", "male", "female", "male", "female"};


//    process
    int gendlen = *(&gend + 1) - gend;
    cout <<   gendlen << endl;

    for (int i =0; i < gendlen; i++){
        if (gend[i] == "male"){
//            cout << "male" << endl;
            male[i] = gend[i];
            cout << (gend[i], male[i]) << endl;
        }
    }

//    int malelen = *(&male + 1) - male;
//    cout << malelen << endl;

//    for (int i =0; i < malelen; i++){
//           cout << male[i] << endl;
//    }
    return 0;
}
