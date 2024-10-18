#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    long long b = 1;
    for (int i = 1; i <= a; i++) {
        b *= i;
    }

    cout << b << endl;
    return 0;
}