#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <string.h>

using namespace std;
string defangIPaddr(string address);
int main()
{
    string tester1 = "192.168.0.1";
    string answer = defangIPaddr(tester1);
    cout << answer << endl;
}

string defangIPaddr(string address)
{
    string answer = "";
    for (char i : address) {
        if(i != '.') {
            answer.push_back(i);
        }
        else {
            answer.append("[.]");
        }
    }
    return answer;
}