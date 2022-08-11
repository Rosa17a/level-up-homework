int sumSquares()
{
    int sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        sum += i * i;
    }

    return sum;
}

int squareSum()
{
    int sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        sum += i;
    }

    int result = sum * sum;

    return result;
}
void differenceOfSums()
{
    int diff = squareSum() - sumSquares();
    cout << diff << endl;
}