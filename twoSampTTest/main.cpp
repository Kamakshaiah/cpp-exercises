#include <bits/stdc++.h>
using namespace std;
//calculating mean
float calc_mean(float arr[], int n){
   float sum = 0;
   for (int i = 0; i < n; i++)
      sum = sum + arr[i];
   return sum / n;
}
//calculating standard deviation
float calc_deviation(float arr[], int n){
   float sum = 0;
   for (int i = 0; i < n; i++)
      sum = sum + (arr[i] - calc_mean(arr, n)) * (arr[i] - calc_mean(arr, n));
   return sqrt(sum / (n - 1));
}
//finding t-test of two data
float calc_ttest(float arr1[], int n, float arr2[], int m){
   float mean1 = calc_mean(arr1, n);
   float mean2 = calc_mean(arr2, m);
   float sd1 = calc_deviation(arr1, n);
   float sd2 = calc_deviation(arr2, m);
   float t_test = (mean1 - mean2) / sqrt((sd1 * sd1) / n + (sd2 * sd2) / m);
   return t_test;
}

float one_sample_ttest(float arr[], int n){

    float mean = calc_mean(arr, n);
    float sd = calc_deviation(arr, n);
    float t_test = (mean - 0) / sqrt(sd / n);
    return t_test;
}
int main(){
   float arr1[] = { 10, 20, 30, 40, 50 };
   int n = sizeof(arr1) / sizeof(arr1[0]);
   float arr2[] = { 1, 29, 46, 78, 99 };
   int m = sizeof(arr2) / sizeof(arr2[0]);
   cout << calc_ttest(arr1, n, arr2, m) << endl;
   cout << one_sample_ttest(arr1, n) << endl;

   return 0;
}
