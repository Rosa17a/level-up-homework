#include <vector>
#include <iostream>
using namespace std;

vector<int> calculateAndSortSquares(vector<int> elements)
{

    for (int i = 0; i < elements.size(); i++)
    {

        elements[i] = elements[i] * elements[i];
    }
    sort(elements.begin(), elements.end());
    return elements;
}

void printSortedSquares(vector<int> data)
{

    vector<int> elements = calculateAndSortSquares(data);
    for (int i = 0; i < elements.size(); i++)
    {

        cout << elements[i] << " ";
    }
}