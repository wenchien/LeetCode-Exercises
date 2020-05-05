#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int subtractProductAndSum(int n);
int main()
{
    int tester = 705;
    int answer = subtractProductAndSum(tester);
    cout << answer << endl;
}

int subtractProductAndSum(int n)
{
    bool setFirst = false;
    int product_int = 0;
    int sum_int = 0;
    int size = to_string(n).size();
    for (int i = 0; i < size; i++)
    {
        int remainder = n % 10;
        cout << remainder << endl;
        if (product_int == 0 && !setFirst) {
            product_int = remainder;
            setFirst = true;
        }
        else {
            product_int *= remainder;
        }
        sum_int += remainder;
        n /= 10;
        
    }
    cout << "Sum " << sum_int << " and Product " << product_int << endl;

    return product_int - sum_int;
}