#include <iostream>
#include <string>

using namespace std;

string lowercase(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    };

    return s;
};

double eur2usd(double x) {
    // current conversion is 1 eur = 1.1829612 usd
    double r = 1.1829612;

    return x * r;
};

double usd2eur(double x) {
    // current conversion is 1 usd = 0.845379 eur
    double r = 0.845379;

    return x * r;
};

int main() {

    cout << "Which currency would you like to conver to (usd/eur)? ";
    string cur;
    cin >> cur;

    if (lowercase(cur) == "eur") {
        cout << "Enter amount of USD: ";
        double usd;
        cin >> usd;
        printf("%.2f", usd2eur(usd));
    } else if (lowercase(cur) == "usd") {
        cout << "Enter amount of EUR: ";
        double eur;
        cin >> eur;
        printf("%.2f", eur2usd(eur));
    } else {
        cout << "Unsupported currency";
    };
};