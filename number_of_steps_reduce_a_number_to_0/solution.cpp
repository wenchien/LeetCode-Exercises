#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
int numberOfSteps(int num);
int numberOfStepsBetter(int num);
int main()
{
    int answer = numberOfSteps(123);
    cout << answer << endl;
}

int numberOfSteps(int num)
{
    int i = 0;
    while (num != 0)
    {

        if (num % 2 == 1)
        {
            num -=1;
            
        }
        else
        {
            num /=2;
        }
        i++;
    }
    return i;
}

int numberOfStepsBetter(int num) {
    int answer = 0;
    if (num %2 == 0) {
        answer = num / 2;
    }
  

    return answer;
}
