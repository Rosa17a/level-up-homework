#include <vector>

using namespace std;
int getDivisibleByIndexCount(vector<int> array)
{
    int count = 0;
    for (int i = 0; i < array.size() - 1; i++)
    {
        if (array[i] % i == 0)
        {
            count++;
        }
    }
    return count;
}