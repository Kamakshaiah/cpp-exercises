#include <iostream>

using namespace std;

float mean(float arr[], int n);

int main()
{
    cout << "Hello world!" << endl;

    float arr[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6, 7, 8, 9, 10};
    float avr = mean(arr, 10);
    cout << avr << endl;
    return 0;
}

float mean(float arr[], int n){
    float sum;
//    int len = sizeof(arr)/sizeof(float);
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    float avg = sum/n;
    return avg;
}


//notes
//https://www.programiz.com/cpp-programming/examples/average-arrays
