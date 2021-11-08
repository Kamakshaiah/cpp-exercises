#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string fname = "files/text.txt";
    ifstream myfile(fname);
    if(myfile){
        cout << myfile.rdbuf();

    } else {
        cerr << "No file found" << endl;
    }
}
