#include <iostream>
#include <typeinfo>

using namespace std;

//int main(int argc, char* argv[])
//{
//    char a[0];
//    string s;
//    int i;
//    double d;
//
//    cout << typeid(a).name() << endl;
//    cout << typeid(s).name() << endl;
//    cout << typeid(i).name() << endl;
//    cout << typeid(d).name() << endl;
//    cout << typeid(argc).name() << endl;
//    cout << typeid(argv).name() << endl;
//    return 0;
//}

int main(int argc, char* argv[])
{
    string num = "123.123";
    int numInt = stoi(num);
    double numDouble = stod(num);
    float numFloat = stof(num);

    cout << num << endl;
    cout << numInt << endl;
    cout << numDouble << endl;
    cout << numFloat << endl;
    cout << to_string(numDouble) << endl;

    return 0;
}
