#include <iostream>
#include <string>
//#include <windows.h>
//#include <stdio.h>
#include <unistd.h>
//#include<direct.h>
#include <cstring>

using namespace std;

//void CreateFolder(char * path)
//{
//    if(!CreateDirectory(path ,NULL))
//    {
//        return;
//    }
//}


int main() {

    string path;
    char pwd[256];
    getcwd(pwd, 256);
    cout << "Current working directory: " << pwd << endl;
    string dir= "\\mk\\";
    path.append(pwd);
    path.append(dir);
//    path.push_back(dir);
    cout << "New path (appended): " << path << endl;
        mkdir(path.c_str());
    cout << "Directory has been created successfully!" << endl;
//    return EXIT_SUCCESS;
    return 0;
}



