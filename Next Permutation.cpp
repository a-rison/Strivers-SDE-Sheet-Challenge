<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int ind = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (permutation[i] < permutation[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (permutation[i] > permutation[ind])
        {
            swap(permutation[i], permutation[ind]);
            break;
        }
    }
    sort(permutation.begin() + ind + 1, permutation.end());
    return permutation;
    //  Write your code here.
=======
#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int ind = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (permutation[i] < permutation[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (permutation[i] > permutation[ind])
        {
            swap(permutation[i], permutation[ind]);
            break;
        }
    }
    sort(permutation.begin() + ind + 1, permutation.end());
    return permutation;
    //  Write your code here.
>>>>>>> 5f50fe6b89f25a14f8fbc3927eb15b42b3ebe1a1
}