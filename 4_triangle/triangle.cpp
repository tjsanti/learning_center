#include <iostream>
#include <stdexcept>

using namespace std;

void triangle(int n)
{
    if (n < 1)
    {
        throw invalid_argument("Value must be >= 1");
    };

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        };
        cout << endl;
    };
};

int main()
{

    cout << "Enter a number for the base: ";
    int n;
    cin >> n;
    triangle(n);

    return 0;
};