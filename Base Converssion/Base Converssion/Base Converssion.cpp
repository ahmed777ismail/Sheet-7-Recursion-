#include<bits/stdc++.h>
using namespace std;
void print(int num) { // 0
	if (num == 0) {
		return;
	}
	print(num / 2);
	cout << num % 2;

}

int main()
{
	int testCase;// 2
	cin >> testCase;
	while (testCase--) { // 2 1
		int num;
		cin >> num;
		print(num);
		cout << endl;
	}
}