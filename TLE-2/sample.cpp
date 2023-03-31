#include <bits/stdc++.h>
using namespace std;

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


int main()
{

}