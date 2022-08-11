#include "solutions/1.cpp"
#include "solutions/2.cpp"
#include "solutions/3.cpp"
#include "solutions/4.cpp"
#include "solutions/5.cpp"
#include "solutions/6.cpp"
#include "solutions/7.cpp"
#include "solutions/8.cpp"
#include "solutions/9.cpp"
#include "solutions/10.cpp"

using namespace std;
int inputNumber()
{
    cout << "\nEnter the number: ";
    int n;
    cin >> n;
    return n;
}
vector<int> inputVector()
{
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid input, terminating program..." << endl;
        exit(1);
    }
    vector<int> elements(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> elements[i];
    }
    return elements;
}
vector<int> inputSortedVector()
{
    cout << "Enter the length of array: ";
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid input, terminating program..." << endl;
        exit(1);
    }

    vector<int> elements(n);
    cout << "Enter the sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> elements[i];
    }
    return elements;
}
vector<int> inputRange()
{
    cout << "Enter the start and the end of range ";
    int n = 2;

    if (n <= 0)
    {
        cout << "Invalid input, terminating program..." << endl;
        exit(1);
    }
    vector<int> elements(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> elements[i];
    }
    return elements;
}
int main()
{
    // TEST the functions
    //  -----SOLUTION 1-----
    vector<int> data = inputVector();
    printSortedSquares(data);

    // -----SOLUTION 2-----
    int number1 = inputNumber();
    calculateTheSumOfDigits(number1);

    // -----SOLUTION 3-----
    int number2 = inputNumber();
    subtractSumAndProd(number2);

    // -----SOLUTION 4-----
    vector<int>
        range = inputRange();
    calculateRangeOdds(range[0], range[1]);

    // -----SOLUTION 5-----
    vector<int>
        array = inputSortedVector();
    int number3 = inputNumber();
    binarySearchRecursive(array, number3);
    vector<int>
        array1 = inputSortedVector();
    int number4 = inputNumber();
    binarySearchIterative(array1, number4);

    // -----SOLUTION 6-----
    vector<int> data = inputVector();
    cout << getDivisibleByIndexCount(data) << endl;

    // -----SOLUTION 7-----
    getSumOfEvenNumbers();

    // -----SOLUTION 8-----
    differenceOfSums();

    // -----SOLUTION 9-----
    vector<int> data = inputVector();
    bubleSort(data);

    // -----SOLUTION 10-----
    int number = inputNumber();
    bool isPowerOfTwo = powerOfTwo(number);
    cout << (isPowerOfTwo ? "true" : "false") << endl;

    return 0;
}
