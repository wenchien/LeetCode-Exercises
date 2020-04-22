#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
map<int, vector<int>> grouping;//or for this solution, we can just use a normal vector, a map isn't really needed
vector<vector<int>> groupThePeople(vector<int> &groupSizes);
void printVector(vector<int> &array);
void printAnswer(vector<vector<int>> &answer);
void printMap();
int main()
{
    vector<int> groupSizes = {2, 1, 3, 3, 3, 2}; //7 elements
    vector<vector<int>> answer = groupThePeople(groupSizes);

    for (int i = 0; i < answer.size(); i++)
    {
        printVector(answer[i]);
    }
}
//
vector<vector<int>> groupThePeople(vector<int> &groupSizes)
{
    vector<vector<int>> answer;
    cout << "In function" << endl;
    cout << groupSizes.size() << endl;
    for (int i = 0; i < groupSizes.size(); ++i)
    {
        int element = groupSizes[i];

        grouping[element].push_back(i);
        if (grouping[element].size() == element)
        {
            answer.push_back(grouping[element]);
            grouping.erase(element);
        }

        //if the element exists as a key,
        //pull the value, which is a list of integers indicating indices and add it in.
        //now if the vector size is bigger than element, add to answer vector and remove it from map
    }
    // groupSizes[i] -> list of (i)
    cout << "End of Finding Keys" << endl;
    return answer;
}

void printAnswer(vector<vector<int>> &answer)
{
}

void printMap()
{
    cout << "In printMap()" << endl;
    for (auto &j : grouping)
    {
        std::cout << j.first << ": ";
        printVector(j.second);
        cout << endl;
    }
}

void printVector(vector<int> &array)
{
    cout << "print Vector() " << endl;
    for (auto &k : array)
    {
        cout << k << endl;
    }

    cout << endl
         << endl;
}