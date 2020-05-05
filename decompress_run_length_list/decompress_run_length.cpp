#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <string.h>

using namespace std;
vector<int> decompressRLElist(vector<int> &nums);
void printArray(vector<int> &arr);
int main()
{
    vector<int> tester = {1,2,3,4};
    vector<int> answer = decompressRLElist(tester);
    printArray(answer);
}

vector<int> decompressRLElist(vector<int> &nums)
{
    //determine solution size by looking at every nums[2*i]
    int n = nums.size() / 2;
    vector<int> solution_arr;
    
    for (int j = 0; j < n; j++) {
        //grab loop times
        int freq = nums[2*j];
        for (int l = 0; l < freq; l++) {
            solution_arr.push_back(nums[(2*j) + 1]); 
        }
    }

    return solution_arr;
}

void printArray(vector<int> &arr) {
    for (auto &i : arr) {
        std::cout << i << " ";
    }
}