#include <bits/stdc++.h>
using namespace std;

void twoSum(int n, vector<int> &arr, int target) {
    int hash[5];

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
          cout<<hash[i]<<" , ";
    }
    
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    twoSum(n, arr, target);
}