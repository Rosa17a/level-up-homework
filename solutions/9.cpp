#include <iostream>
using namespace std;
void bubleSort(vector<int> &array)
{
    for (int i = 0; i < array.size() - 1; i++)
    {
        for (int j = 0; j < array.size() - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
}
