#include <iostream>
using namespace std;

int r, c;;
int m1[1000][1000];
int m2[1000][1000];
int sum(int m1[][1000], int m2[][1000], int r, int c) {
    if (c == ::c) {
        cout << endl;
        c = 0;
        r++;
    }
    if (r == ::r)
        return 0;
    else {
        cout << m1[r][c] + m2[r][c] << ' ';
        c++;
        sum(m1, m2, r, c);
    }
}
int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m1[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m2[i][j];
        }
    }
    sum(m1, m2, 0, 0);
}