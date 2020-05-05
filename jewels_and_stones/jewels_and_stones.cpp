#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;
unordered_map<int, int> jewels;
int numJewelsInStones(string J, string S);
int numJewelsInStonesCleaner(string J, string S);
int main()
{   
    string J = "aA";
    string S = "aAABBBBB";
    int answer = numJewelsInStonesCleaner(J, S);
    cout << answer << endl;
}

int numJewelsInStones(string J, string S)
{
    int answer = 0;
    for (auto &i : J)
    {
        jewels[i] = 1;
    }

    for (int i = 0; i < S.size(); i++)
    {
        if (jewels[S[i]] == 1)
        {
            answer++;
        }
    }

    return answer;
}

//doesn't use unordered map
int numJewelsInStonesCleaner(string J, string S) {
    int answer = 0;
    int jewels_arr[J.size()];
    for (auto &i : J)
    {
        jewels_arr[i] = 1;
    }

    for (int i = 0; i < S.size(); i++)
    {
        if (jewels_arr[S[i]] == 1)
        {
            answer++;
        }
    }

    return answer;

}