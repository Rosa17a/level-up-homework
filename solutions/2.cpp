#include <iostream>
using namespace std;
void calculateTheSumOfDigits(int number)
{

    int sum = 0;
    vector<int> digits;

    while (number != 0)
    {
        sum += number % 10;
        digits.push_back(number % 10);
        number /= 10;
    }

    for (int i = digits.size() - 1; i >= 0; i--)
    {

        cout << digits[i] << (i != 0 ? "+" : ";");
    }

    cout << endl;
    cout << "The sum of digits is " << sum << endl;
}
