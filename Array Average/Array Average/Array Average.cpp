#include <iostream>
#include <vector>
#include <iomanip>  // For controlling decimal precision
using namespace std;

// Recursive function to calculate the sum of elements in the array
double sumArray(const vector<int>& arr, int index) {
    // Base case: If index is out of bounds, return 0
    if (index < 0)
        return 0;

    // Recursive call to add current element and sum of remaining elements
    return arr[index] + sumArray(arr, index - 1);
}

int main() {
    int n;
    cin >> n;  // Input the number of elements in the array
    vector<int> arr(n);

    // Input the elements of the array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Calculate the sum using recursion
    double totalSum = sumArray(arr, n - 1);

    // Calculate the average
    double average = totalSum / n;

    // Print the average with 6 digits after the decimal point
    cout << fixed << setprecision(6) << average << endl;

    return 0;
}
