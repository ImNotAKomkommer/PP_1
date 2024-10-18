#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long result = (m + n - 1) / n; 
    cout << result << endl;

    return 0;
}