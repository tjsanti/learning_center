#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

string first_function() {
    return "I am the first function";
};

string second_function() {
    return "I am the second function";
};

string third_function() {
    return "I am the third function";
};

int main() {
    srand(time(NULL));

    int funcs[3] = {1, 2, 3};
    int rand_index = rand() % 3;
    int rand_func = funcs[rand_index];

    switch (rand_func){
        case 1:
            cout << first_function();
            break;
        case 2:
            cout << second_function();
            break;
        case 3:
            cout << third_function();
            break;
    };

    return 0;
};