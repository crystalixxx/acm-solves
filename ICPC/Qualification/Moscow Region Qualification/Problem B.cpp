#include <iostream>
#include <cstdint>
#include <string>

int main() {
    std::string ss;
    std::cin >> ss;
    int64_t t, u, s;
    std::cin >> t >> u >> s;
    int64_t cnt = 0;
    if (ss == "org") {
        cnt = 4;
    } else if (s >= 30 || t >= 2) {
        cnt = 3;
    } else {
        cnt = 2;
    }
    if (u >= 60) {
        cnt += 2;
    } else if (u >= 30) {
        cnt += 1;
    }
    std::cout << cnt;
    return 0;
}
