#include<bits/stdc++.h>
using namespace std;

void subsequence(vector<int>v,vector<int>&arr,int n,int i)
{
   if(i==n)
   {
      if (arr.size() == 0) {
            cout << "{}";
        } else {
            for (auto it : arr) {
                cout << it << " ";
            }
        }
        cout<<endl;
        return;
    
   }
arr.push_back(v[i]);
subsequence(v,arr,n,i+1);
arr.pop_back();
subsequence(v,arr,n,i+1);

}


int main()
{
    vector<int>v={3,1,2};
    vector<int>arr;
    int n = v.size();
    subsequence(v,arr,n,0);
    
    
    return 0;

}