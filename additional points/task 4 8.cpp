#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;

    Point points[100];
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    double sumX = 0, sumY = 0;
    for (int i = 0; i < n; i++) {
        sumX += points[i].x;
        sumY += points[i].y;
    }

    double centerX = sumX / n;
    double centerY = sumY / n;

    cout << centerX << " " << centerY << endl;
    return 0;
}
