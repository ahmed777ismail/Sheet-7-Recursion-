#include <bits/stdc++.h>
using namespace std;

bool check(long long n, long long initial) {
    if (initial <= n) {
        if (initial == n) {
            return true;
        }
        else {
            bool route1 = check(n, initial * 10);
            bool route2 = check(n, initial * 20);
            return route1 || route2;
        }
    }
    if (initial < n) {
        return false;
    }
    return false;
}

int main() {
    long long testcase;
    cin >> testcase;
    while (testcase--) {
        long long m;
        cin >> m;
        if (check(m, 1)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}