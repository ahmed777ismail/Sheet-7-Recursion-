#include <iostream>
using namespace std;

int rece(int n, int c) {
    if (c <= 0) {
        return 0;

    }
    rece(n + 1, c - 2);
    for (int j = n; j > 0; j--) {
        cout << ' ';
    }
    for (int i = 0; i < c; i++) {
        cout << '*';
    }
    cout << endl;
}
int main()
{
    int s, c;
    cin >> s;
    rece(0, (2 * s) - 1);
    return 0;
}