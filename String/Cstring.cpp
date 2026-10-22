#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100];
    char str2[100] = "hello world";
    strcpy(str1, str2);
    cout << str1 << endl;

    return 0
}

char str1 = "hello";
char str2 = "world";

strcat(str1, str2);
cout <<str1 << endl;

return 0;

// output = str1 = str1+str2 = hello world 

char str1 = "hello";
char str2 = "hello";

cout << strcmp(str1, str2) << endl;

return 0;

// output = 0 because of hello = hello 