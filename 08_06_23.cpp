// Problem: Find Kth permutation
// Date: 8th June
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        string s;
        int cnt = 1;
        for (int i = 1; i <= n; i++)
        {
            s += (i + '0');
        }
        do
        {
            if (cnt == k)
                return s;
            cnt++;
        } while (next_permutation(s.begin(), s.end()));
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends