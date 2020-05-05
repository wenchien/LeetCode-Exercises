#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
void duplicateZeros(vector<int> &arr);
void printArray(vector<int> &arr);
void duplicateZeroesMem(vector<int> &arr);
int main()
{
    vector<int> tester = {1,0,2,3,0,4,5,0};
    duplicateZeros(tester);
    cout << endl<<endl;
    printArray(tester);
}


void duplicateZeros(vector<int> &arr)
{
    int count = 0;
    int length = arr.size()-1;
    //iterate where count is dynamic because we trim off the "amount" at the end
    //keeping length-count elements
    for (int i = 0; i <= length - count; i++) {
        if (arr[i] == 0) {
            //edge case
            if (i == length - count) {//dealling with last case
                arr[length] = 0;//this one cannot be duplicated
                length--;//and ignore that last one
                break;
            }
            count++;
        }
        
    }
    //start backwards, starting from the elements that will only be part of the
    //new array
    //This is correct, done by me
    for (int j = length-count; j >= 0; j--) {
        if(arr[j] > 0) {
            arr[j + count] = arr[j];
        }
        if (arr[j] == 0) {
            arr[j + count] = 0;
            count--;
            arr[j + count] = 0;
        }
    }
    std::cout << endl << endl;
    printArray(arr);

}

void printArray(vector<int> &arr) {
    for (auto &i : arr) {
        std::cout << i << " ";
    }
}