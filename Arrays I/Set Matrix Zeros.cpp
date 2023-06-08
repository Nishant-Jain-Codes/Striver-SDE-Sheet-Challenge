#include <bits/stdc++.h>

//time complexity : O(n*m)
//space complexity : O(n+m)

//hash the row and column which has 0
//then iterate over the matrix and if the row or column is present in the hash set then make that element 0
void approach1(vector<vector<int>> &matrix){
    unordered_set<int> row,col;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row.insert(i);
                col.insert(j);
            }
        }
    }
    for(auto i : row){
        for(int j=0;j<m;j++){
            matrix[i][j] = 0;
        }
    }
    for(auto i : col){
        for(int j=0;j<n;j++){
            matrix[j][i] = 0;
        }
    }
}
//time complexity : O(n*m)
//space complexity : O(1)
//use the first row and first column as the hash set

void approach2(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    bool setFirstRowZero = false;
    bool setFirstColZero = false;
    //check if first row and first column has 0
    for(int i=0;i<n;i++){
        if(matrix[i][0]==0){
            setFirstColZero = true;
            break;
        }
    }
    for(int i=0;i<m;i++){
        if(matrix[0][i]==0){
            setFirstRowZero = true;
            break;
        }
    }
    //use first row and first column as hash set
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    //set matrix zeroes
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j] = 0;
            }
        }
    }
    //set first row and first column zeroes if required
    if(setFirstRowZero){
        for(int i=0;i<m;i++){
            matrix[0][i] = 0;
        }
    }
    if(setFirstColZero){
        for(int i=0;i<n;i++){
            matrix[i][0] = 0;
        }
    }
}
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	approach2(matrix);
}