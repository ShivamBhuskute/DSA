#include <bits/stdc++.h>

bool isPowerOf2(int n) {
    if(n > 1) {
        return (n != 0) && (n & (n - 1)) == 0;
    }
    return false;
}

int main() {
    std::cout << std::boolalpha << isPowerOf2(8);
}