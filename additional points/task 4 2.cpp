#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = 0;

    if (N > 0) {
        sum = (1 + N) * N / 2;
    } else {
        sum = (N * (N - 1)) / 2 + 1; 
    }

    cout << sum << endl;
    return 0;
}