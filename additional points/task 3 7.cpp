#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }

    cout << sum * 4 << endl;
    return 0;
}
