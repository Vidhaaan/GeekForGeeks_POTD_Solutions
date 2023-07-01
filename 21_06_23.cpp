// Problem: Reverse Coding
// Date: 21th June
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfNaturals(int n)
    {
        int mod = 1e9 + 7;

        return ((n % mod) * 1LL * ((n + 1) % mod) / 2) % mod;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}