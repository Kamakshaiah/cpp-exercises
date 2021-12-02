#include <iostream>

using namespace std;

int main()
{
//    inputs
    int a = 3;
    int b = 1;
    int c = 2;

//    process  & outputs
    if (a > b) {
        if (a > c){
            cout << a <<    " is maximum" << endl;
        }
    } else if( b > c){
        cout << b << " is maximum" << endl;
    } else {
        cout << c << " is maximum" << endl;
    }

    return 0;
}
