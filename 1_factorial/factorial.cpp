#include <iostream>
#include <stdexcept>

using namespace std;

int factorial(int x){
    if(x < 0){
        throw invalid_argument("Number must be non-negative");
    };
    if(x <= 1){
        return 1;
    };

    int res = 1;
    while(x > 1){
        res *= x;
        x -= 1;
    };

    return res;
};

int main(){

    cout << "Enter a number: ";
    int x;
    cin >> x;
    cout << factorial(x);
}