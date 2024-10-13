#include <bits/stdc++.h>

int main() {
    int64_t n;
    std::cin >> n;
    int64_t ans = n / 1000;
    int64_t last = n / 1000;
    bool is_used = false;
    n %= 1000;
    if (n / 100 == 1) {
        ans += 1;
    } else if (n / 100 == 2) {
        ans += 2;
    } else if (n / 100 == 3) {
        ans += 3;
    }else if (n / 100 == 4) {
        ans += 2;
    }else if (n / 100 == 5) {
        ans += 1;
    }else if (n / 100 == 6) {
        ans += 2;
    }else if (n / 100 == 7) {
        ans += 3;
    }else if (n / 100 == 8) {
        if (last > 0) {
            ans += 3;
            is_used = true;
        } else {
            ans += 4;
        }
    }else if (n / 100 == 9) {
        ans += 2;
    }
    last = n / 100;

    n %= 100;
    if (n / 10 == 1) {
        ans += 1;
        is_used = false;

    } else if (n / 10 == 2) {
        ans += 2;
        is_used = false;

    } else if (n / 10 == 3) {
        ans += 3;
        is_used = false;

    }else if (n / 10 == 4) {
        ans += 2;
        is_used = false;

    }else if (n / 10 == 5) {
        ans += 1;
        is_used = false;

    }else if (n / 10 == 6) {
        ans += 2;
        is_used = false;

    }else if (n / 10 == 7) {
        ans += 3;
        is_used = false;
    }else if (n / 10 == 8) {
        if (last != 0 && last != 4 && last != 5 && !is_used && last != 9) {
            ans += 3;
            is_used = true;
        } else {
            ans += 4;
            is_used = false;
        }
    }else if (n / 10 == 9) {
        ans += 2;
    } else {
        is_used = false;
    }
    last = n / 10;
    n %= 10;
    if (n == 1) {
        ans += 1;
        is_used = false;

    } else if (n == 2) {
        ans += 2;
        is_used = false;

    } else if (n == 3) {
        ans += 3;
        is_used = false;

    }else if (n == 4) {
        ans += 2;
        is_used = false;

    }else if (n == 5) {
        ans += 1;
        is_used = false;

    }else if (n == 6) {
        ans += 2;
        is_used = false;

    }else if (n == 7) {
        ans += 3;
        is_used = false;
    }else if (n == 8) {
        if (last != 0 && last != 4 && last != 5 && !is_used && last != 9) {
            ans += 3;
            is_used = true;

        } else {
            ans += 4;
            is_used = false;
        }
    }else if (n == 9) {
        ans += 2;
    } else {
        is_used = false;
    }
    std::cout  << ans;
    return 0;
}