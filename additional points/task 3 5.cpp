#include <iostream>
using namespace std;

int main() {
    double a;
    int b;
    cin >> a >> b;

    double c = 1;
    double term = 1;

    for (int i = 1; i <= b; i++) {
        term *= a;
        c += term;
    }

    cout << c << endl;
    return 0;
}
