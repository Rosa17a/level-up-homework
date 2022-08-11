using namespace std;
struct PairStruct
{
    int number;
    string str;
};

PairStruct calculateProduct(int number)
{
    PairStruct result;
    result.number = 1;

    vector<int> digits;

    while (number != 0)
    {
        result.number *= number % 10;
        digits.push_back(number % 10);
        number /= 10;
    }

    for (int i = digits.size() - 1; i >= 0; i--)
    {
        result.str += to_string(digits[i]) + (i != 0 ? "*" : "");
    }

    return result;
}

PairStruct calculateSum(int number)
{
    PairStruct result;
    result.number = 0;

    vector<int> digits;

    while (number != 0)
    {
        result.number += number % 10;
        digits.push_back(number % 10);
        number /= 10;
    }

    for (int i = digits.size() - 1; i >= 0; i--)
    {
        result.str += to_string(digits[i]) + (i != 0 ? "+" : "");
    }

    return result;
}

void subtractSumAndProd(int number)
{
    PairStruct sum = calculateSum(number);
    PairStruct product = calculateProduct(number);

    int sub = product.number - sum.number;
    string subStr = "(" + product.str + ")" + "-" + "(" + sum.str + ")";

    cout << subStr << endl;
    cout << "The difference of digits product and sum is " << sub << "." << endl;
}