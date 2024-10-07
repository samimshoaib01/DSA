/*Without using DP*/
// Tc=O(2^n) Sc= O(n)stackspace [Max depth of the recursion tree]
// #include<bits/stdc++.h>
// using namespace std;
// int fun(int n)
// {
//     if(n<=1)
//         return n;
//     else
//         return fun(n-1)+fun(n-2);
// }

// int main()
// {
//     cout<<"Enter the digit"<<endl;
//     int n;
//     cin>>n;
//     int k =fun(n);
//     cout<<k<<endl;
//     return 0;
// }


/*With using DP Memoization */
// Tc=O(n)
// Sc=O(n) Stack space + O(n) Array
// #include<bits/stdc++.h>
// using namespace std;
// int fun(int n,vector<int>&dp)
// {
//     if(n<=1)
//         return n;
//     if(dp[n]!=-1)
//         {
//             return dp[n];
//         }
//     else
//         return dp[n]=fun(n-1,dp)+fun(n-2,dp);
// }

// int main()
// {
//     cout<<"Enter the digit"<<endl;
//     int n;
//     cin>>n;
//     vector<int>dp(n+1,-1);
//     int k =fun(n,dp);
//     cout<<k<<endl;
//     return 0;
// }


/*using tabulation */
//Tc=O(n) and Sc=O(n) stack space is eleminated
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout<<"Enter the number"<<endl;
//     int n ;
//     cin>>n;
//     vector<int>dp(n+1,-1);
//     dp[0]=0;
//     dp[1]=1;
//     for(int i =2;i<=n;i++)
//     {
//         dp[i]= dp[i-1]+dp[i-2];
//     }
//     cout<<"the "<<n<<" term in fibonacci series is : "<<dp[n];
//     return 0;
// }

/*space optimizing tabulation method*/
//Tc=O(n) and Sc = O(1)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout<<"Enter the number"<<endl;
//     int n ;
//     cin>>n;
//     int prev2=0;
//     int prev=1;
//     int curi=-1;
//     for(int i =2;i<=n;i++)
//     {
//         curi=prev+prev2;
//         prev2=prev;
//         prev=curi;
//     }
//     cout<<"the "<<n<<" term in fibonacci series is : "<<curi;
//     return 0;
// }
