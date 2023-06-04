#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> a(n);
  if(n<=0) return a;
  for(int i=0;i<n;i++){
    a[i].resize(i+1,1);
    for(int j=1;j<i;j++){
      a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
  }
  return a;
}
