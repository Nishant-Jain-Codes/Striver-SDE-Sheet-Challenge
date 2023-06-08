#include <bits/stdc++.h> 
//time complexity : O(n)
//space complexity : O(1)
void sort012(int *arr, int n)
{
   //   Write your code here
    int start = 0;
    int end = n-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            start++;
        else if(arr[i]==2)
            end--;
    }
    for(int i=0;i<start;i++){
        arr[i] = 0;
    }
    for(int i=start;i<=end;i++){
        arr[i] = 1;
    }
    for(int i=end+1;i<n;i++){
        arr[i] = 2;
    }
}