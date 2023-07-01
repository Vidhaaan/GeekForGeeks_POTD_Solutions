// Problem: Is Binary Number Multiple of 3
// Date: 30th June
//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int isDivisible(string s)
    {
        int even = 0, odd = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {
                even += (int)(s[i] - '0');
            }
            else
                odd += (int)(s[i] - '0');
        }
        if (abs(even - odd) % 3 == 0)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
    return 0;
}

// } Driver Code Ends