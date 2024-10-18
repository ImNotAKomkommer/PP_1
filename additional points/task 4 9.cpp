#include <iostream>
#include <cmath>
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

    double maxDistance = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) { // чтобы не считать расстояние до самой себя
                double dist = sqrt((points[i].x - points[j].x) * (points[i].x - points[j].x) +
                                   (points[i].y - points[j].y) * (points[i].y - points[j].y));
                if (dist > maxDistance) {
                    maxDistance = dist;
                }
            }
        }
    }

    cout << maxDistance << endl;
    return 0;
}
