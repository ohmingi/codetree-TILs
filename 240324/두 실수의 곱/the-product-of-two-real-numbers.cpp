#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a=5.26;
    double b=8.27;

    cout << fixed;

    cout << setprecision(3) << a*b;
    
}