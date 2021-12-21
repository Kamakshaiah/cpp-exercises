#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


// https://stackoverflow.com/questions/25438023/c-how-can-i-use-a-structure-to-calculate-the-total-number-of-males-and-femal
// http://www.cplusplus.com/forum/beginner/34728/
// https://www.geeksforgeeks.org/counting-frequencies-of-array-elements/

//int main()
//{
//    cout << "Hello world!" << endl;
//
//    int size;
//    cout << "Enter size of the array:" ;
//    cin >> size;
//    int arr[size];
//
//    for (int i=0; i < size; i++){
//        cin >> arr[i];
//    }
//
//    cout << "The array:" << endl;
//
//    for (int i=0; i < size; i++){
//        cout << arr[i] << endl;
//    }
//
//    return 0;
//}

//int main(){
//
//    string gen[] = {"male", "female", "male", "female", "female", "male", "female", "female", "male", "female"};
//    int len = sizeof(gen)/sizeof(char);
//
//    for (int i =0; i<len; i++){
//        cout << gen[i] << endl;
//    }
//    return 0;
//}

//int main(){
//
//    string gen[] = {"male", "female", "male", "female", "female", "male", "female", "female", "male", "female"};
//    int len = sizeof(gen)/sizeof(char);
//
//    int m=0;
//    int f=0;
//
//    for (int i =0; i<len; i++){
//        if (gen[i] == "male"){
//            cout << gen[i] << ", " << i << endl;
//            m += 1;
////            cout << m << endl;
//        } else if(gen[i] == "female"){
//            cout << gen[i] << ", " << i << endl;
//            f += 1;
////            cout << f << endl;
//        }
//    }
//    cout << m << f << endl;
//    return 0;
//}

//int main(){
//    int arr[] = {1, 2,3, 4, 5, 6, 7, 8, 9, 10};
//    int sum = 0;
//    double dev;
//
//    int len = sizeof(arr)/sizeof(int);
//
//    for (int i=0; i<len; i++){
//        sum += arr[i];
//    }
//    double avg = sum/len;
//
//    for (int i=0; i<len; i++){
//        dev += pow(arr[i]-avg, 2);
//    }
//
//    double var = dev/(len-1);
//    double stdev = pow(var, 0.5);
//
//    cout << "avg: " << avg << endl;
//    cout << "variance: " << var << endl;
//    cout << "std: " << stdev << endl;
//}
