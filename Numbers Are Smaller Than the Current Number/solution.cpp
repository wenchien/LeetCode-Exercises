#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;
unordered_map<int, int> arr_mapping;
vector<int> smallerNumbersThanCurrent(vector<int> &nums);
void printVector(vector<int> &nums);
int main()
{
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> solution(nums.size(), 0);
    solution = smallerNumbersThanCurrent(nums);
    printVector(solution);
}

//Time Complexity O(2n) or O(n)
vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> unsorted_array = nums;

    //sort array
    std::sort(nums.begin(), nums.end());
    
    //now array is sorted, we can compare much faster
    vector<int> solution_arr(nums.size(), 0);
    solution_arr[0] = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            solution_arr[i] = i;
            arr_mapping[nums[i]] = i;
        }
        else if (nums[i] == nums[i-1]) {
            solution_arr[i] = solution_arr[i -1];//probably not needed
            arr_mapping[nums[i]] = solution_arr[i -1];
        }
    }
    
    solution_arr.clear();
    for (int j = 0; j < nums.size(); j++) {
        if (arr_mapping[unsorted_array[j]] >= 0) {
            //if it exists
            solution_arr.push_back(arr_mapping[unsorted_array[j]]);
        }
    }

    return solution_arr;
}

void printVector(vector<int> &nums) {
    for (auto &i : nums) {
        cout << i << " ";
    }
}
