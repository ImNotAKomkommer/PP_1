#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
    int x;
    int y;
};

double distance(const Point& p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

bool compare(const Point& a, const Point& b) {
    return distance(a) < distance(b);
}

int main() {
    int n;
    cin >> n;

    Point points[100];
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    sort(points, points + n, compare);

    for (int i = 0; i < n; i++) {
        cout << points[i].x << " " << points[i].y << endl;
    }

    return 0;
}
