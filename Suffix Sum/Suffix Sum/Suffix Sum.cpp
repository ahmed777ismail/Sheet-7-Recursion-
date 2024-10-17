#include <iostream>
#include <vector>

using namespace std;

long long suffixSum(const vector<int>& A, int N, int M) {
    // Base case: If M is 0, sum is 0
    if (M == 0) return 0;

    // Recursive case: Sum of last M numbers is the last number plus the sum of the last M-1 numbers
    return A[N - 1] + suffixSum(A, N - 1, M - 1);
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << suffixSum(A, N, M) << endl;

    return 0;
}
