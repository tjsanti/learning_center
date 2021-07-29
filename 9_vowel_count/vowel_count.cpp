#include <iostream>

using namespace std;

struct counts {
    int num_vowels;
    int num_consonants;
};

counts count_vowels(string s) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    counts out_counts;
    out_counts.num_vowels = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (find(begin(vowels), end(vowels), s[i]) != end(vowels)) {
            out_counts.num_vowels++;
        };
    };

    out_counts.num_consonants  = s.length() - out_counts.num_vowels;

    return out_counts;
};

int main() {
    cout << "Enter a word: ";
    string s;
    cin >> s;
    counts res = count_vowels(s);
    cout << s << " has " << res.num_vowels << " vowels and " << res.num_consonants << " consonants.";
};