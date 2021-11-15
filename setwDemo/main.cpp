#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create_matrix();

int main()
{
    cout << "The output matrix is: " << endl;
    cout << endl;
    create_matrix();
        return 0;
}

void create_matrix(){
    srand(time(0));
    for (int i=0; i <3; i++){
        cout << setw(5);
//        cout << '|' ;
//        cout << RAND_MAX;
    for (int j=0; j <3; j++){

        cout << setprecision(2)<<(double)rand()/(RAND_MAX+1)*(10-2)+2 << setw(5);

    }
//    cout << '|';
    cout << endl;

    }
}
