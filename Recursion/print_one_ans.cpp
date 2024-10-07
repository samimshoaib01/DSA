#include <bits/stdc++.h>
using namespace std;

bool subsequence(vector<int> v, vector<int>& arr, int n, int i, int k, int sum) {
    if (i == n) {
        if (sum == k) {
            for (auto it : arr) {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        else return false;
    }

    arr.push_back(v[i]);
    sum=sum+v[i];
    if(subsequence(v, arr, n, i + 1, k, sum )==true){
        return true;
    }
    sum=sum- v[i];

    arr.pop_back();
    if(subsequence(v, arr, n, i + 1, k, sum)==true){
        return true;
    }

    return false;
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
