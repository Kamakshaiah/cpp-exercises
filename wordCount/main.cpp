#include <iostream>

using namespace std;

int main()
{
    char str[] = "kamakshaiah musunuru, sukanya musunuru";
    int count=0;
    for (int i=0; str[i] != '\0'; ++i){
        if (str[i] == ' '){
            count++;
        }
    }
    cout << count+1 << endl;
    return 0;
}
