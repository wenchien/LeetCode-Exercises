#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
/*UNSOLVED*/
using namespace std;
vector<vector<int>> diagonalSort(vector<vector<int>> &mat);
void printVector(vector<vector<int>> &mat);
vector<vector<int>> diagonalSortBetter(vector<vector<int>> &mat);
void swap(vector<vector<int>> &mat, int i, int j, int k, int l);
/**Given a m * n matrix mat of integers, 
 * sort it diagonally in ascending order from the top-left to the bottom-right 
 * then return the sorted array. */
int main()
{
    vector<vector<int>>mat = {{3,3,1,1},{2,2,1,2},{1,1,1,2}};
    mat = diagonalSortBetter(mat);
    cout << "\n" << endl;
    printVector(mat);
}

vector<vector<int>> diagonalSortBetter(vector<vector<int>> &mat)
{
    vector<int>sorted_array[mat[0].size()];

}

vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
{
    
    int m = mat.size();//rows
    int n = mat[0].size();//column
    vector<vector<int>> sorted_array = mat;
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            //[i-j] = 0, same diagonal.
            //[abs(i-j)] = certain value, same diagonal
            if (abs(i - j) > i) {

            }
            else {
                sorted_array[abs(i-j)][j] = mat[i][j];
            }
            
            //sort(sorted_array.begin(), sorted_array.end());
        }
        //sort at the end?
        sort(sorted_array.begin(), sorted_array.end());
        printVector(sorted_array);
        cout << endl;
    }
    return sorted_array;
}

void swap(vector<vector<int>> &mat, int i, int j, int k, int l) {
    int temp = mat[i][j];
    mat[i][j] = mat[k][l];
    mat[k][l] = temp;
}

void printVector(vector<vector<int>> &mat) {
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            cout << mat[i][j] << " ";
        }
    }
}