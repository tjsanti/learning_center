#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            cout << pow(i, (1.0/5.0)) << endl;
        };
    };

    return 0;
};
