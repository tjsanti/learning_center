#include <iostream>
#include <stdexcept>

using namespace std;

void upside_down_triangle(int n){
    if(n < 1){
        throw invalid_argument("Value must be >= 1");
    };

    for(int i=0; i < n; i++){
        for(int j=1; j <= n-i; j++){
            cout << "*";
        };
        cout << endl;
    };
};

int main(){

    cout << "Enter a number for the base: ";
    int n;
    cin >> n;
    upside_down_triangle(n);
}