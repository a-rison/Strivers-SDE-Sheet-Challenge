<<<<<<< HEAD
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();
	set<int> r,c;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				r.insert(i);
				c.insert(j);
			}
		}
	}
	for(auto it: r){
		for (int i = 0; i < m; i++) {
			matrix[it][i] = 0;
		}
    }
	for(auto it: c){
		for(int i=0;i<n;i++){
			matrix[i][it]=0;
		}
	}
	
	// Write your code here.
=======
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();
	set<int> r,c;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				r.insert(i);
				c.insert(j);
			}
		}
	}
	for(auto it: r){
		for (int i = 0; i < m; i++) {
			matrix[it][i] = 0;
		}
    }
	for(auto it: c){
		for(int i=0;i<n;i++){
			matrix[i][it]=0;
		}
	}
	
	// Write your code here.
>>>>>>> 5f50fe6b89f25a14f8fbc3927eb15b42b3ebe1a1
}