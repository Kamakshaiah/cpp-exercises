#include <iostream>
#include <fstream>
using namespace std;

//Title: input output operations
//
//Objective:
//    1. To learn about cout, cin, cerr, endl commands
//

//-- Write theory here --

//-- INPUTS --
//x =1
//y = 2
//
//-- LOGIC --
//z = x + y

//code starts

//PROGRAM 1

//int main(){
//    cout<<"Hello world!"<<endl;
//    return 0;
//}

//PROGRAM 2

int main(){
    //    inputs
    int x;
    int y;
    int z;

//    logic
    cout<<"Input two numbers"<<endl;
    cin>>x >>y;

//    ouput
    cout<< x+y << endl;

    return 0;
}

//
//int main(){
//    int x;
//    int y;
//    int z;
//
//    cout<<"Input two numbers"<<endl;
//    cin>>x >>y;
//    if (cin.fail())
//        cerr << "Input is necessary";
//    else
//        //    z = x+y;
//        cout<< x+y << endl;
//    cout<< x+y << endl;
//    return 0;
//}

//
//int main() {
//  // print error message
//  cerr << "Error!!";
//  return 0;
//}
//
//// Output: Error!!

//int main() {
//  string file_name = "data.txt";
//  ifstream my_file(file_name);
//
//  if(my_file) {
//    cout << my_file.rdbuf();
//  }
//  else {
//    // print error message
//    cerr << "Error while opening the file " << file_name;
//  }
//
//  return 0;
//}

//code ends
//OUTPUT HERE

