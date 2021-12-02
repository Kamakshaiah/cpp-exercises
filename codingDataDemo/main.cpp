#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    string gender = "female";
    int age = 40;

    if (gender == "male"){
        cout << "we got a male individual in survey! and the age of the participant is " << age << endl;
    } else {
        cout << "we got a female individual in survey! and the age of the participant is " << age << endl;
    }
    return 0;
}
