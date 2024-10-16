#include <bits/stdc++.h>
using namespace std;

long long sum(long long arr[], int size) {

    if (size == 0)
        return 0;
    // base case
    else
        // return arr[--size] + sum(arr);
        return arr[--size] + sum(arr, size);
}

int main()
{

    int size;
    cin >> size;
    long long arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, size);
    return 0;

}