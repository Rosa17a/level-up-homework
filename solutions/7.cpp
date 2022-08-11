int fib(int n)
{
    if (n < 2)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int getSumOfEvenNumbers()
{
    // last number not bigger than 4 000 000

    int sum = 0;
    int i = 0;

    while (true)
    {
        int f = fib(i);

        if (f % 2 == 0)
        {
            sum += f;
        }
        if (f >= 4000000)
            break;

        i++;
    }
    cout << sum << endl;

    return sum;
}