#include <iostream>
#include <vector>
using namespace std;

// Recursive function to check if the array is a palindrome
bool isPalindrome(const vector<int>& arr, int start, int end) {
    // Base case: If pointers cross or meet, it's a palindrome
    if (start >= end)
        return true;

    // If elements at current pointers don't match, it's not a palindrome
    if (arr[start] != arr[end])
        return false;

    // Recursive call to check the inner elements
    return isPalindrome(arr, start + 1, end - 1);
}

int main() {
    int n;
    cin >> n;  // Input the number of elements in the array
    vector<int> arr(n);

    // Input the elements of the array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Check if the array is a palindrome and print the result
    if (isPalindrome(arr, 0, n - 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
