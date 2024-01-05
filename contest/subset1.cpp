#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int dp[1005][1005];

int main()
{
 int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cin >> n;
    int d;
    cin>>d;
    int sum=0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    int s=(sum+d)/2;

    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = abs(dp[i - 1][j - a[i - 1]]) + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
              dp[i][j]%=mod;
        }
    }
     cout << dp[n][s]<< endl;
    }
    return 0;
}
