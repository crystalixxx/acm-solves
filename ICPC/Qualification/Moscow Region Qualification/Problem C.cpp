#include <bits/stdc++.h>

int main() {
    int u, m;
    std::cin >> u >> m;

    std::vector<std::pair<long double, long double>> nba;
    for (int i = 0; i < 15; ++i) {
        long double t, c;
        std::cin >> t >> c;

        nba.emplace_back(t, c);
    }

    for (int i = 1; i <= 4; ++i) {
        long double sum = 0;
        int count = 0;

        for (auto [t, x] : nba) {
            if (t < i) {
                sum += static_cast<long double>(m);
                continue;
            }

            sum += (x / t);
        }

        if (sum < u) {
            std::cout << sum << std::endl;
        } else {
            std::cout << sum + sum - u << std::endl;
        }
    }
}