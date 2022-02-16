#include <iostream>

using namespace std;

int main()
{
    string str = "password";
    char temp;
    cout << str << endl;

    for (int i; (i < 100 & str[i] !='\0'); i++){
        temp = str[i]+2;
        cout << str[i] << " " << temp << endl;
    }
//    cout << str << endl;
//
    for (int i; (i < 100 & str[i] !='\0'); i++){
        temp = str[i]-2;
        cout << str[i] << " " << temp << endl;
    }
//    cout << str << endl;
    return 0;
}
