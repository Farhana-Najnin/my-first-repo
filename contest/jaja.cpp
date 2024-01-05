#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
   for(int i=0;i<t;i++)
    {
        int dj= 0;
        string s;
        cin >> s;
        vector<int>ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (dj> 0)
                {
                    ans.push_back(dj);
                    dj = 0;
                }
            }
            else
                dj++;
        }
      if (dj > 0){
       ans.push_back(dj);
      }
        sort(ans.rbegin(), ans.rend());
   for(int i=0;i<ans.size();i++)
    cout<<ans[i];
        dj = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            if (i % 2 == 0)
            {
                dj += ans[i];
            }
        }
        cout<<dj<<endl;
    }
}
