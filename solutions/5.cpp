#include <iostream>
using namespace std;

int _binarySearchRecursive(vector<int> array, int left, int right, int number)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (array[mid] == number)
            return mid;

        if (array[mid] > number)
            return _binarySearchRecursive(array, left, mid - 1, number);

        return _binarySearchRecursive(array, mid + 1, right, number);
    }

    throw "Not found";
}

int _binarySearchIterative(vector<int> array, int number)
{
    int left = 0, right = array.size() - 1;
    int mid;

    while (right - left > 1)
    {
        int mid = (right + left) / 2;
        if (array[mid] < number)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    if (array[left] == number)
    {
        return left;
    }
    else if (array[right] == number)
    {
        return right;
    }
    else
    {
        throw "Not found";
    }
}

void binarySearchRecursive(vector<int> array, int number)
{
    int left = 0;
    int right = array.size() - 1;
    sort(array.begin(), array.end());

    try
    {
        int index = _binarySearchRecursive(array, left, right, number);
        cout << index << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
}
void binarySearchIterative(vector<int> array, int number)
{

    try
    {
        int index = _binarySearchIterative(array, number);
        cout << index << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
}