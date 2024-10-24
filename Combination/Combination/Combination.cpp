#include <bits/stdc++.h>
using namespace std;
long long fac = 1, t = 2;
void print(int num, int num1, int ch) {
	if (num == num1) { cout << fac; return; }
	fac *= num;
	if (t <= ch - num1 && fac % t == 0) { fac /= t; t++; }
	return print(num - 1, num1, ch);
}
int main() {
	int num1, num2; cin >> num1 >> num2;
	if (num1 == num2) {
		cout << "1"; return 0;
	}
	else if (num2 > num1) { cout << 0; return 0; }
	else { print(num1, num2, num1); }
}