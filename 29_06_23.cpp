// Problem: Next Happy Number
// Date: 29th June
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int squaresum(int n)
    {
        int total = 0;
        while (n > 0)
        {
            int digit = n % 10;
            n /= 10;
            total += digit * digit;
        }
        return total;
    }

    bool isHappy(int n, unordered_set<int> &memo)
    {
        if (n == 1)
            return true;
        if (memo.count(n) > 0)
            return false;
        memo.insert(n);
        int next = squaresum(n);
        return isHappy(next, memo);
    }

    int nextHappy(int n)
    {
        unordered_set<int> memo;
        for (int i = n + 1;; i++)
        {
            if (isHappy(i, memo))
                return i;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends