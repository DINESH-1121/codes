#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

int fun1(int i)
{
    if (i == 1)
        return 1;
    return fun1(i - 1) + i;
}

/**
 * knapsack: find out maximum (no consecutive can be selected)
 *
 * RECURSION:
 * if(i>=n) return;
 * return max(w[i]+fun(i+2,n), fun(i+1,n))
 *
 * TC: O(2^N)
 */

void subsets(vector<int> v,int i,vector<int> v1){
    if(i==v.size()){
        ans.push_back(v1);
        return;
    }
    subsets(v,i+1,v1);
    v1.push_back(v[i]);
    subsets(v,i+1,v1);
}

int main()
{
    // vector<int> v({1,2,3}),v1;
    // subsets(v,0,v1);
    // for(auto x:ans)
    // {
    //     for(auto y:x)
    //         cout << y << " ";
    //     cout << endl;
    // }

    
}