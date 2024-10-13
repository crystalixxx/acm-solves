#include <bits/stdc++.h>

int main() {
    std::string s;
    std::cin >> s;

    int64_t k, l;
    std::cin >> k >> l;

    int j = 0;
    int64_t current_value;
    std::string current_string;

    bool gary = true;

    for (int i = 0 ; i < s.size() ; ++i) {
        current_string += s[i];
        current_value = std::stol(current_string);

        if (i - j + 1 > l) {
            gary = false;
        }

        if (current_value % k == 0) {
            j = i + 1;
        }

        current_string = std::to_string(current_value % k);
    }

    if (stol(current_string) != 0) {
        gary = false;
    } else if (gary) {
        gary = true;
    }

    j = 0;
    current_value = 0;
    current_string = "";

    for (int i = 0 ; i < s.size() ; ++i) {
        current_string += s[i];
        current_value = std::stol(current_string);

        current_string = std::to_string(current_value % k);
    }

    if (stol(current_string) != 0) {
        if (!gary) {
            std::cout << 1;
        } else {
            std::cout << 0;
        }
    } else {
        if (gary) {
            std::cout << 1;
        } else {
            std::cout << 0;
        }
    }

}