// Header Files and namespaces
// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
 
// Code Shortners
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
const ll mod = 1000000007;
 
// Code
int main()
{
    int a,b;
    cin>>a>>b;
    vector< vector<int> > dp(a+1 , vector<int> (b+1,1e9));
    for(int i=0;i<a+1;i++){
        for(int j=0;j<b+1;j++){
            if(i==j){
                dp[i][j]=0;
            }
            else{
                for(int k=1;k<i;k++){
                    dp[i][j]=min(dp[i][j],dp[i-k][j]+dp[k][j]+1);
                }
                for(int k=1;k<j;k++){
                    dp[i][j]=min(dp[i][j],dp[i][j-k]+dp[i][k]+1);
                }
            }
        }
    }
    cout<<dp[a][b]<<endl;
    return 0;
}
