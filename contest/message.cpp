#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    while(cin >> a >> b)
    {
    int n = b.size(), m = a.size();

    int x = 0;
    bool ans = false;
    for (char c : a)
    {
        if (c == b[x])
        {
            x++;
        }
        if (x == b.size())
        {
            ans = true;
            break;
        }
    }

    if (ans){
        cout << "Possible\n";
    }
    else{
        cout << "Impossible\n";
    }
    }
    return 0;
}
