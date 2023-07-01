// Problem: Least Prime Factor
// Date: 7th June


//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<int> leastPrimeFactor(int n)
    {
        vector<bool> isprime(n + 10, true);
        vector<int> lp(n + 1, 0);

        isprime[0] = false;
        isprime[1] = false;

        for (int i = 2; i <= n; i++)
        {
            if (isprime[i])
            {
                lp[i] = i;
                for (int j = 2 * i; j <= n; j += i)
                {
                    isprime[j] = false;
                    if (lp[j] == 0)
                    {
                        lp[j] = i;
                    }
                }
            }
        }

        lp[1] = 1;
        return lp;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        vector<int> ans = ob.leastPrimeFactor(n);
        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends