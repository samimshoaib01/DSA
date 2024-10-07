#include <bits/stdc++.h>
using namespace std;

void subsequence(vector<int> v, vector<int>& arr, int n, int i, int k, int sum) {
    if (i == n) {
        if (sum == k) {
            for (auto it : arr) {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
  
    // Include the current element in the subsequence
    arr.push_back(v[i]);
    sum=sum+v[i];
    subsequence(v, arr, n, i + 1, k, sum );
    sum=sum- v[i];

    // Exclude the current element from the subsequence
    arr.pop_back();
    subsequence(v, arr, n, i + 1, k, sum);
}

int main() {
    vector<int> v = {1,2,1};
    vector<int> arr;
    int n = v.size();
    int k = 2;
    int sum = 0;
    subsequence(v, arr, n, 0, k, sum);

    return 0;
}
