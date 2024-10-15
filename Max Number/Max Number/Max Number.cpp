#include <iostream>
#define ll long long
using namespace std;
ll mx;
ll rece(ll arr[], ll s, ll c) {
    if (s - 1 == c) {
        mx = arr[c]; 
        return 0;

    }
    rece(arr, s, c + 1);
    if (mx < arr[c])
        mx = arr[c];
}
int main()
{
    ll s, c = 0;
    cin >> s;
    ll arr[s];
    for (ll i = 0; i < s; i++) {
        cin >> arr[i];
    }
    rece(arr, s, c);
    cout << mx;
    return 0;
}