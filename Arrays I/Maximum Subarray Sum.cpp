#include <bits/stdc++.h> 
//kadane's algorithm
//time complexity : O(n)
//space complexity : O(1)
long long kadaneAlgo(int arr[], int n){
    long long maxSum = INT_MIN;
        long long currSum = 0;
        for(int i=0;i<n;i++){
            currSum += arr[i];
            maxSum = max(maxSum,currSum);
            if(currSum<0)
                currSum = 0;
        }
        return maxSum;
}