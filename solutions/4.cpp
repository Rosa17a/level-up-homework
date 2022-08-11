#include <vector>

using namespace std;
void calculateRangeOdds(int start, int end)
{
    vector<int> odds;
    for (int i = start; i < end; i++)
    {
        if (i % 2 != 0)
        {
            odds.push_back(i);
        }
    }

    cout << odds.size() << endl;
}