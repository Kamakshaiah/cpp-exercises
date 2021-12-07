#include <iostream>
//#include <boost/algorithm/string.hpp>
#include <bits/stdc++.h>

using namespace std;

//wordcount demo

int main()
{
    char str[] = "this line is for testing wordcount algorithm in cpp.";
    int count=0;
    for (int i=0; str[i] != '\0'; ++i){
        if (str[i] == ' '){
            count++;
        }
    }
    cout << count+1 << endl;
    return 0;
}

//tokenization demo

//int main(){
//    string line = "This line is for testing tokenization in Cpp";
//
//    // Vector of string to save tokens
//    vector <string> tokens;
//
//    // stringstream class check1
//    stringstream check1(line);
//
//    string intermediate;
//
//    // Tokenizing w.r.t. space ' '
//    while(getline(check1, intermediate, ' '))
//    {
//        tokens.push_back(intermediate);
//    }
//
//    // Printing the token vector
//    for(int i = 0; i < tokens.size(); i++)
//        cout << tokens[i] << '\n';
//}

//int main(){
//    string input("geeks\tfor\tgeeks");
//    vector<string> result;
//    boost::split(result, input, boost::is_any_of("\t"));
//
//    for (int i = 0; i < result.size(); i++)
//        cout << result[i] << endl;
//    return 0;
//}
