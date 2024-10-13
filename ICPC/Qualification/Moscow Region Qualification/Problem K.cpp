#include <bits/stdc++.h>


int main() {
    int64_t n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::vector<int64_t> t(n);
    for (int64_t i = 0; i < n; ++i) {
        std::cin >> t[i];
    }
    std::priority_queue<int64_t> q;
    std::priority_queue<int64_t, std::vector<int64_t>, std::greater<>> q2;
    int64_t value = 0;
    int64_t last = 0;
    for (int64_t i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            q.push(t[i]);
        } else {
            if (!q.empty()) {
                value += q.top();
                value += t[i];
                q.pop();
                q2.push(t[i]);
            } else {
                if (!q2.empty()) {
                    value -= q2.top();
                    if (q2.top() < t[i]) {
                        q2.pop();
                        q2.push(t[i]);
                    }
                    value += std::max(q2.top(), t[i]);
                }
            }
        }
    }
    std::cout << value;
}