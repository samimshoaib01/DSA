#include <bits/stdc++.h>
using namespace std;

int lb(vector<int>&v,int x)
{
    int low=0,high=v.size()-1;
    int ans ;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(v[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    
    return ans;
}

int main() {
    
    vector<int>v={2,3,4,6,7,9,33,44,55,66};
    int x;
    cin>>x;
    int k = lb(v,x);
    cout<<k<<endl;
    

    return 0;
}