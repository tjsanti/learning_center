#include <iostream>
#include <string>

using namespace std;

string lowercase(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    };

    return s;
};

string reverse(string s) {
    int length = s.size();

    if (length < 2) {
        return s;
    };

    return s[length-1] + reverse(s.substr(0, length-1));
};

int main() {

    cout << "Enter a string: ";
    string s;
    getline(cin, s);
    s = lowercase(s);
    cout << reverse(s);
    
     return 0;
};