#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int balancedStringSplit(string s);
int main()
{
    string tester = "LRLRLLLRRRLRRR";
    int answer = balancedStringSplit(tester);
    cout << answer << endl;
}

int balancedStringSplit(string s)
{
    int balance = 0;
    int answer = 0;
    for (char c : s) {
        //now we need to count the amount of Ls and Rs
        //For every L we increment by one, else decrease by one
        //if balance reaches to 0 at certain point, increment answer value by 1
        if (c == 'L') {
            balance++;
        }

        if (c == 'R') {
            balance--;
        }

        if (balance == 0) {
            answer++;
        }
    }
    return answer;
}