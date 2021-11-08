#include <iostream>
#include <iomanip>
using namespace std;

/* Contents
 *
 * 1. IOMANIP Functions In C++
 * 2. C++ SetPrecision
 * 3. Setw In C++
 * 4. C++ Setfill
 * 5. Conclusion
 *
 * 1. C++ SetPrecision
 *
 * Function Prototype: setprecision (int n).
 * Parameter(s): n=>value of the decimal precision to be set.
 * Return Value: unspecified
 * Description: This function sets the decimal precision for floating-point values. This formats the floating-point when displayed.
 *
 * Given below is a detailed C++ example to demonstrate the setprecision function.
 */

/*int main ()
{
  double float_value =3.14159;
  cout << setprecision(4) << float_value << '\n';
  cout << setprecision(9) << float_value << '\n';
  cout << fixed;
  cout << setprecision(5) << float_value << '\n';
  cout << setprecision(10) << float_value << '\n';
  return 0;
}*/
//Output:

/* 2. Setw In C++
 *
 * Function Prototype: setw (int n).
 * Parameter(s): n=> value of the field width (number of characters) to be used.
 * Return Value: unspecified
 * Description: Function setw sets the field width or the number of characters to be used for outputting numbers.
 *
 * Example:
 *
 * The setw function is demonstrated using a C++ program.
 */
/*int main () {
  cout << "The number printed with width 10"<<endl;
  cout << setw(10);
  cout << 77 << endl;

  cout << "The number printed with width 2"<<endl;
  cout << setw(2);
  cout << 10 << endl;

  cout << "The number printed with width 5"<<endl;
  cout << setw(5);
  cout << 25 << endl;
  return 0;
}*/
//Output:

/* C++ Setfill
 * Function Prototype: setfill (char_type c).
 * Parameter(s): n=> new fill character for the stream; char_type: type of characters used by stream.
 * Return Value: unspecified
 * Description: setfill sets c as the new fill character for the stream.
 *
 * Example:
 *
 * Given below is an example C++ program to demonstrate setfill.
 */

/*int main () {
  cout << setfill ('*') << setw (10);
  cout << 15 << endl;
  cout << setfill ('#') << setw (5);
  cout << 5 << endl;
  cout << setfill ('#') << setw (5);
  cout << 1 << endl;
  cout << setfill ('*') << setw (10);
  cout << 25 << endl;
  return 0;
}*/
//Output:
