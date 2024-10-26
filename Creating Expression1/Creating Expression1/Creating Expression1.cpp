#include <iostream>
#include <vector>
using namespace std;

bool canFormExpression(const vector<int>& A, int index, int currentSum, int target) {
    // Base case: if we have used all numbers
    if (index == A.size()) {
        return currentSum == target;
    }

    // Recursively try adding or subtracting the current number
    return canFormExpression(A, index + 1, currentSum + A[index], target) ||
        canFormExpression(A, index + 1, currentSum - A[index], target);
}

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Start the recursion from the first element
    if (canFormExpression(A, 1, A[0], X)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}