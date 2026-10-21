#include<iostream>
#include<cstring>

using namespace std;

bool isPalindrome(char str[], int n){
    int st = 0; int end = n-1;
    while(st<end){
        if(str[st++] != str[end--]){
            cout<<"not valid palindrome\n";
            return false;
        }
    }
    cout<<"valid palindrome\n";
    return true;
}

int main(){
    char word[] = "racecar";
    isPalindrome(word, strlen(word));
    return 0;
}