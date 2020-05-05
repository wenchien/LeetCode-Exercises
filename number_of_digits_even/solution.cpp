#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int findNumbers(vector<int> &nums);
int main()
{
    vector<int> testere = {437,315,322,431,686,264,442};
    int answer = findNumbers(testere);
    cout << answer << endl;
    return 0;
}

int findNumbers(vector<int> &nums)
{
    int answer = 0;
    int checker = 0;
    for (auto &i : nums) {
        //get total number of digits
        while(i != 0) {
            int digit = i % 10;//digit
            checker++;
            i /= 10;
        }

        if (checker % 2 == 0) {
            answer++;
        }
    checker = 0;
    }

    return answer;
}
