#include <bits/stdc++.h>
using namespace std;

void printReversed(int arr[], int n, int i) {
    if (i < n) {
        printReversed(arr, n, i + 2);
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    printReversed(arr, n, 0);

    return 0;
}