#include <iostream>
using namespace std;

int rece(int n) {
    cout << n;
    if (n > 1) {
        cout << ' ';
        return rece(n - 1);
    }
    else
        return 0;
}
int main()
{
    int x;
    cin >> x;
    rece(x);
    return 0;
}