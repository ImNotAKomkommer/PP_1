#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int n;
    cin >> n;
    int maxX = 0, maxY = 0;
    double maxDistance = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        double distance = sqrt(x * x + y * y);
        if (distance > maxDistance) {
            maxDistance = distance;
            maxX = x;
            maxY = y;
        }
    }
    cout << maxX << " " << maxY << endl;
    return 0;
}