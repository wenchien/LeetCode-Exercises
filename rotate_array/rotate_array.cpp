#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
void printV(vector<int> &nums);
void rotate(vector<int> &nums, int k);
void rotateFaster(vector<int> &nums, int k);
int main()
{
    vector<int> tester = {1, 2};
    rotate(tester, 3);
}

void rotateFaster(vector<int> &nums, int k)
{
    k %= nums.size();
    std::vector<int> res(nums.size());
    for (int i = 0; i < nums.size(); ++i)
        res[i] = nums[(i - k + res.size()) % res.size()];
    nums = res;
}

void rotate(vector<int> &nums, int k)
{
    vector<int> temp;
    //printV(nums);
    int n = nums.size();
    // cout <<endl<<endl;
    k = k % nums.size();//don't forget all rotate related question needs this!!!!!!
    cout << k << endl;
    
    for (int i = 0; i < n - k; i++)
    {
        temp.push_back(nums[0]); //i no ++
        nums.erase(nums.begin());
        // printV(nums);
        // cout << endl;
        // printV(temp);
        //cout << "i loop" << endl;
    }

    for (int j = 0; j < n - k; j++)
    {
        nums.push_back(temp[j]);
        //cout << "j loop" << endl;
    }
    printV(nums);
}

void printV(vector<int> &nums)
{
    for (auto &i : nums)
    {
        cout << i << " ";
    }
}