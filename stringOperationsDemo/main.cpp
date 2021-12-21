#include <iostream>
#include <string>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

//INPUT COMMANDS

//int main()
//{
//    	// Declaring string
//	string str;
//
//	// Taking string input using getline()
//	// "kamakshaiah" in giving output
//	getline(cin,str);
//
//	// Displaying string
//	cout << "The initial string is : ";
//	cout << str << endl;
//
//	// Using push_back() to insert a character
//	// at end
//	// pushes 's' in this case
//	str.push_back('\n');
//
//	// Displaying string
//	cout << "The string after push_back operation is : ";
//	cout << str << endl;
//
//	// Using pop_back() to delete a character
//	// from end
//	// pops 's' in this case
//	str.pop_back();
//
//	// Displaying string
//	cout << "The string after pop_back operation is : ";
//	cout << str << endl;
//
//	return 0;
//
//}

//ITERATOR FUNCS

//int main(){
//    string st = "civics";
//    string str;
//    string::iterator  it;
//    string::reverse_iterator rit;
//
//    for (it=st.begin(); it != st.end(); it++){
//        cout << *it;
//    }
//    cout << '\n';
//    for (rit=st.rbegin(); rit != st.rend(); rit++){
//        cout << *rit;
//    }
//    cout << str;
//    return 0;
//}

//MANIPULATION FUNCS

// C++ code to demonstrate the working of copy() and swap()
//int main()
//{
//	// Initializing 1st string
//	string str1 = "kamakshaiah musunuru";
//
//	// Declaring 2nd string
//	string str2 = "is an academic";
//
////	// Declaring character array
////	char ch[80];
////
////	// using copy() to copy elements into char array
////	str1.copy(ch,23,0);
////
////	// Displaying char array
////	cout << "The new copied character array is : ";
////	cout << ch << endl << endl;
////
////	// Displaying strings before swapping
////	cout << "The 1st string before swapping is : ";
////	cout << str1 << endl;
////	cout << "The 2nd string before swapping is : ";
////	cout << str2 << endl;
//
//	// using swap() to swap string content
//	str1.swap(str2);
//
//	// Displaying strings after swapping
//	cout << "The 1st string after swapping is : ";
//	cout << str1 << endl;
//	cout << "The 2nd string after swapping is : ";
//	cout << str2 << endl;
//
//	return 0;
//
//}


//APPLICATIONS
//1. new line character
//2. counting characters in a given string
//3. palindrome (length example)
//3. data encoding (strings to numbers)
//4. lifo, fifo [iterator functions]

// 2. COUNTING

//int main(){
//    string str = "kamakshaiah";
//    int cnt;
//    for (int i=0; i < str.length(); i++){
//        if (str[i] == 'a'){
//            cnt++;
//        }
//    }
//    cout << cnt << endl;
//
//    return 0;
//}

//PALINDROME

//see palindromeDemo


//ENCODING AND DECODING

//int main(){
//
//    string str = "kamakshaiah";
//    char albet[26] {};
//
//    iota(begin(albet), end(albet), 'a');
//
////    for(auto c: albet){
////        cout << c;
////    }
//
//    for (int i=0; i < str.length(); i++){
//            for (int j=0; j < 26; j++){
//                if (str[i] == albet[j]){
//                    cout << j+1;
////                    cout << albet[j];
//                }
//            }
//    }
////    cout << numbers << endl;
//    return 0;
//
//}
