
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // char word[30];

    // cin >> word; // Ignores whitespace after the word

    // cout << "Your word was: " << word << endl;
    // cout << "Length: " << strlen(word) << endl;

    char sentence[30];

    cin.getline(sentence, 30);
    cout << "Your word was: " << sentence << endl;
    cout << "Length: " << strlen(sentence) << endl;

    return 0;
}
