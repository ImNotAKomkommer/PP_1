#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    double sum = 1.0;
    double factorial = 1.0;

    for (int i = 1; i <= N; i++) {
        factorial *= i;
        sum += 1.0 / factorial;
    }

    cout << sum << endl;
    return 0;
}
