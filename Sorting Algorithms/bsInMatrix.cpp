/*
You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target , return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.
Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
*/

#include<iostream>
using namespace std;


int main(){
    int arr[][] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;

    int rows = 3;
    int cols = 4;

    int high = 0;
    int low = 0;

    for(int i=0; i<rows; i++){
        if(arr[i][cols-1]<target){
            low = arr[i][0];
            high = arr[i][cols-1];
        }
    }

    bool flag = false;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            ans = true;
            break;
        }
        else if(arr[mid] < target)  
    }
}