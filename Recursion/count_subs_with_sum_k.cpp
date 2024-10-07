#include <bits/stdc++.h>
using namespace std;

int subsequence(vector<int> v, int n, int i, int k, int sum) {
    if(sum>k)
    {
        return 0;
    }
    if (i == n) {
        if (sum == k) {
          
            return 1;
        }
        else return 0;
    }

   
    sum=sum+v[i];
    int l = subsequence(v, n, i + 1, k, sum );
    sum=sum- v[i];

    
    int r = subsequence(v, n, i + 1, k, sum);

    return l+r;
}

int main() {
    vector<int> v = {1,2,1};
    vector<int> arr;
    int n = v.size();
    int k = 2;
    int sum = 0;
    cout<<subsequence(v,n, 0, k, sum)<<endl;

    return 0;
}
