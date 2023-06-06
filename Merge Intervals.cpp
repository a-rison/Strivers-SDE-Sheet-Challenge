#include <bits/stdc++.h>
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();
    vector<vector<int>> ans;
    vector<int> a(2);
    a[0] = intervals[0][0];
    a[1] = intervals[0][1];
    for (int i = 1; i < n; i++)
    {
        if (intervals[i][0] <= a[1])
            a[1] = max(a[1], intervals[i][1]);
        else
        {
            ans.push_back(a);
            a[0] = intervals[i][0];
            a[1] = intervals[i][1];
        }
    }
    ans.push_back(a);
    return ans;
    // Write your code here.
}
