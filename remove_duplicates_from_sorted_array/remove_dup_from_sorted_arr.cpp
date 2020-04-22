#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
int removeDuplicates(vector<int> &nums);
int main()
{
    vector<int> sorted_array = {0,0,1,1,1,2,2,3,3,4};
    int answer = removeDuplicates(sorted_array);
    cout << answer << endl;
    return 0;
}

//remember this is SORTED
int removeDuplicates(vector<int> &nums)
{
    //remove duplicates and return new size;
    //tbh you don't even need to modify the arrays itself

    //don't forget 0 input cause leetcode has great constraint description on every damn problem ....NOT
    if(nums.size() == 0) return 0;
    //Two ptr approach
    int i = 0; //first ptr, unique ptr number of unique moved
    //int count = 0;
    for (int j = 1; j < nums.size(); j++) {//j is second runner
        if(nums[i] != nums[j]) {
            i++;//when there's a difference we will move that value to i + 1, j++ not needed
            nums[i] = nums[j];
        }
    }
    return i + 1;
}