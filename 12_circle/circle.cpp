#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14;

double area(double r) {
    return PI * pow(r, 2);
};

double radius_from_area(double a) {
    return sqrt(a / PI);
};

void output_measures(double a, double r, double d) {
    cout << "Area: " << a << endl;
    cout << "Radius: " << r << endl;
    cout << "Diameter: " << d << endl;
};

double get_value() {
    cout << "Input value for the measurement: ";
    double val;
    cin >> val;
    
    return val;
};

int main() {

    cout << "What measurement will you be inputing? (area/diameter/radius) ";
    string measure;
    cin >> measure;
    double val;
    double a, r, d;

    if (measure == "area") {
        val = get_value();
        r = radius_from_area(val);
        d = 2 * r;
        output_measures(val, r, d);
    } else if (measure == "radius") {
        val = get_value();
        a = area(val);
        d = val * 2;
        output_measures(a, val, d);
    } else if (measure == "diameter") {
        val = get_value();
        r = val / 2;
        a = area(r);
        output_measures(a, r, val);
    } else {
        cout << "Not a supported input measure.";
    };

     return 0;
};