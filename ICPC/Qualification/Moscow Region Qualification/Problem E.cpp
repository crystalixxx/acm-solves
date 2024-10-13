#include <bits/stdc++.h>

struct point {
    int x;
    int y;
};

int main() {
    int n;
    std::cin >> n;

    std::vector<point> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i].x >> vec[i].y;
    }

    long double ans = 0;

    for (int i = 0; i < n - 1; ++i) {
        if ((vec[i].x - vec.back().x) * (vec[i + 1].y - vec.back().y) == (vec[i + 1].x - vec.back().x) * (vec[i].y - vec.back().y)) {
            ans += std::sqrt(static_cast<long double>(((vec[i].x - vec[i + 1].x) * (vec[i].x - vec[i + 1].x)) +
                    (vec[i].y - vec[i + 1].y) * (vec[i].y - vec[i + 1].y)));
        }
    }

    std::cout << ans;
}