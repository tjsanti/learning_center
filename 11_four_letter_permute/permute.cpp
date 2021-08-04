#include <iostream>
#include <vector>
#include <string>

using namespace std;

string lowercase(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    };
    return s;
};

void find_permutations(int start_idx, string s) {

    if (start_idx == s.length() - 1) {
        cout << s << endl;
        return;
    };

    char prev = '*';

    for (int j = start_idx; j < s.length(); j++) {
        string temp = s;
        
        if (j > start_idx && temp[start_idx] == temp[j]) {
            continue;
        };
        if (prev != '*' && prev == s[j]) {
            continue;
        };

        swap(temp[start_idx], temp[j]);
        prev = s[j];
        find_permutations(start_idx+1, temp);
    };
};

int main() {
    string s = "test";
    s = lowercase(s);
    sort(s.begin(), s.end());
    find_permutations(0, s);

    return 0;
};