#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;

    Point(int x, int y) : x(x), y(y) {}
};

// 사용자 정의 함수 비교
bool compare(const Point &a, const Point &b) {
    if (a.x == b.x) {
        return a.y < b.y; // x 좌표가 같으면 y 좌표가 작은 순서대로 정렬
    }
    return a.x < b.x; // x 좌표가 작은 순서대로 정렬
}

int main() {
    vector<Point> points = {{3, 4}, {1, 2}, {3, 1}, {2, 5}};

    sort(points.begin(), points.end(), compare);

    for (const Point &p: points) {
        cout << "(" << p.x << ", " << p.y << ") ";
    }
    cout << endl;
    return 0;
}