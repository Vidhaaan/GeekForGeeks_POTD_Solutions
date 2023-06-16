// Problem: Reversing the equation
// Date: 4th June

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseEqn(string s)
    {

        int n = s.size();
        string ans = "";
        string temp = "";
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] >= '0' and s[i] <= '9')
            {
                temp += s[i];
            }
            else
            {
                reverse(begin(temp), end(temp));
                ans += (temp + s[i]);
                temp = "";
            }
        }
        reverse(begin(temp), end(temp));
        return ans + temp;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseEqn(s) << endl;
    }
}