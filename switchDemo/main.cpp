// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

//int main() {
//    char oper;
//    float num1, num2;
//    cout << "Enter an operator (+, -, *, /): ";
//    cin >> oper;
//    cout << "Enter two numbers: " << endl;
//    cin >> num1 >> num2;
//
//    switch (oper) {
//        case '+':
//            cout << num1 << " + " << num2 << " = " << num1 + num2;
//            break;
//        case '-':
//            cout << num1 << " - " << num2 << " = " << num1 - num2;
//            break;
//        case '*':
//            cout << num1 << " * " << num2 << " = " << num1 * num2;
//            break;
//        case '/':
//            cout << num1 << " / " << num2 << " = " << num1 / num2;
//            break;
//        default:
//            // operator is doesn't match any case constant (+, -, *, /)
//            cout << "Error! The operator is not correct";
//            break;
//    }
//
//    return 0;
//}

//int main(){
//    int day = 4;
//    switch (day) {
//      case 1:
//        cout << "Monday";
//        break;
//      case 2:
//        cout << "Tuesday";
//        break;
//      case 3:
//        cout << "Wednesday";
//        break;
//      case 4:
//        cout << "Thursday";
//        break;
//      case 5:
//        cout << "Friday";
//        break;
//      case 6:
//        cout << "Saturday";
//        break;
//      case 7:
//        cout << "Sunday";
//        break;
//    }
//}

// C++ program  to demonstrate syntax of switch
#include <iostream>
using namespace std;

// Driver Code
//int main()
//{
//    int x = 2;
//    switch (x) {
//    case 1:
//        cout << "Choice is 1";
//        break;
//    case 2:
//        cout << "Choice is 2";
//        break;
//    case 3:
//        cout << "Choice is 3";
//        break;
//    default:
//        cout << "Choice other than 1, 2 and 3";
//        break;
//    }
//    return 0;
//}

// C++ program  to demonstrate syntax of switch
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    int x[] = {1, 2,3 , 4, 5, 6, 7, 8, 9, 10};
    int choice = 1;

    int sum = 0;
    int len = *(&x + 1) - x;

    for (int i =0; i<len; i++){
        sum += x[i];
    }

    float am = sum/len;

    switch (choice) {
    case 1:
        cout << "Arithmetic Mean" << endl;
        cout << len << endl;
        cout << am << endl;
        break;
    case 2:
        cout << "Geometric Mean";
        break;
    case 3:
        cout << "Harmonic Mean";
        break;
    default:
        cout << "Invalid input...";
        break;
    }
    return 0;
}
