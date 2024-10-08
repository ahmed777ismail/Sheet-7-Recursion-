#include <iostream>
using namespace std;
void print_Digits(int number)
{
    if (number < 10)
    {
        cout << number << " ";
        return;
    }
    print_Digits(number / 10);
    cout << number % 10 << " ";
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int number;
        cin >> number;
        print_Digits(number);
        cout << endl;
    }
    return 0;
}