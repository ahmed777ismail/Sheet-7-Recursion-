#include <iostream>
#include <vector>
using namespace std;

// Recursive function to compute and print the maximum value up to index `i`
void printLeftMax(const vector<int>& arr, vector<int>& result, int i) {
    // Base case: if i is the first element, initialize it directly
    if (i == 0) {
        result[i] = arr[i];
        return;
    }

    // Recursive call for the previous index
    printLeftMax(arr, result, i - 1);

    // Compute the maximum value up to the current index
    result[i] = max(result[i - 1], arr[i]);
}

int main() {
    int n;
    cin >> n;  // Input the number of elements
    vector<int> arr(n), result(n);

    // Input the elements of the array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Calculate the left max using recursion
    printLeftMax(arr, result, n - 1);

    // Print the result
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
