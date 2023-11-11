#include <iostream>
#include <vector>
#include <algorithms>
using namespace std;
int main()
{
    // vector<vector<int>>matrix;
    //  vector<vector<int>>matrix(rows,vector<int>(col,intialise vlaue ));
    vector<vector<int>> matrix(3, vector<int>(3, 1));
    // size of row
    cout << "Size of the row " << matrix.size() << endl;
    cout << "Size of  columns " << matrix[0].size();
}