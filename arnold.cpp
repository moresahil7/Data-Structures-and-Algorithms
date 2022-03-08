#include <iostream>
using namespace std;

int main()
{
    int n, first, num;
    cin >> n;

    first = n;

    if (n < 10)
    {
    }

    while (first != 0)
    {
        num = first % 10;
        first = first / 10;
    }

    int square = n * n;

    int last_digit_square = square % 10;

    if (last_digit_square == num)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}