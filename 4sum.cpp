<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;


string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            int p=target-arr[i]-arr[j];
            int left=i+1;
            int right=j-1;
            while(left<right){
                if(p==arr[left]+arr[right]) return "Yes";
                else{
                    if(p>arr[left]+arr[right]) left++;
                    else right--;
                }
            }
        }
    }
    return "No"; 
}
=======
#include <bits/stdc++.h>
using namespace std;


string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            int p=target-arr[i]-arr[j];
            int left=i+1;
            int right=j-1;
            while(left<right){
                if(p==arr[left]+arr[right]) return "Yes";
                else{
                    if(p>arr[left]+arr[right]) left++;
                    else right--;
                }
            }
        }
    }
    return "No"; 
}
>>>>>>> 5f50fe6b89f25a14f8fbc3927eb15b42b3ebe1a1
