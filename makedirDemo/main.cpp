#include <iostream>
#include <direct.h>
#include<fstream>
#include<bits/stdc++.h>
#include<string>
#include<sstream>

using namespace std;

//int main()
//{
//    if(mkdir("D:\\Work\\CPP\\makedirDemo\\mk")==-1){
//        cout << "There was an error while creating dir..." << endl;
//
//    } else {
//        cout << "Dir. created successfully!" << endl;
//    }
//}

int main(){
    fstream file;

//    int outnum[5] = {1, 2, 3, 4, 5};
//    char innum[5] ;
//    file.open(".\\mk\\out.txt", ios::out);
//
//    if (!file){
//        cout << "file not found" << endl;
//    }
//
//    for (int i; i < 5; i++){
//        file << outnum[i];
//    }
//    char c = 1;
//    int n = int(c);
//    cout << n+1 << endl;

    file.open(".\\mk\\out.txt", ios::in);
    int sum =0;

    for (int i; i < 5; i++){
            char ch;
            int n;
        file >> ch;
        n = stoi(ch);

        cout << n  <<  endl;
    }

//    float result = (float)sum/5;
//    cout << sum << endl;
    file.close();
}
