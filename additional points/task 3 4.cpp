#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    long long c = 1;
    for (int i = 0; i < b; i++) {
        c = c * (a - i) / (i + 1);
    }

    cout << c << endl;
    return 0;
}