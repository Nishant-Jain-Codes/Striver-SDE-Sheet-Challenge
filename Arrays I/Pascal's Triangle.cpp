#include <bits/stdc++.h>
//time complexity : O(n^2)
//space complexity : O(n^2)
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans;
    for(int i=0;i<n;i++){
        ans.push_back(vector<long long int>(i+1,1));
    }
    for(int i=2;i<n;i++){
        for(int j=1;j<ans[i].size()-1;j++){
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }
    return ans;
}
