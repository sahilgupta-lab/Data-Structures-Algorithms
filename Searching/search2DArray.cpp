// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.
// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false

#include<iostream>
using namespace std;

bool search(int arr[][4], int target, int rows, int cols){
    //search the correct column

    int lowCol = 0, highCol = cols-1, correctCol;

    while(lowCol <= highCol){
        int midCol = lowCol + (highCol - lowCol)/2;
        if (target >= arr[0][midCol] && target <= arr[rows-1][midCol]){
            correctCol = midCol;
            break;
        }
        else if (target > arr[rows-1][midCol])  lowCol = midCol + 1;
        else    highCol = midCol - 1;
    }

    // search the correct row
    int lowRow = 0, highRow = rows-1;

    while(lowRow <= highRow){
        int midRow = lowRow + (highRow - lowRow)/2;
        if (target == arr[midRow][correctCol])     return true;
        else if (target < arr[midRow][correctCol])    highRow = midRow - 1;
        else    lowRow = midRow + 1;
    }
    
    return false;
}

int main(){
    int arr[][4] = {{1,3,5,7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    cout << search(arr, 16, 3, 4);
}
