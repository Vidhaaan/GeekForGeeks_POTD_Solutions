// Problem: Matchsticks game
// Date: 20th June
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int matchGame(long long N)
    {
        if (N % 5 != 0)
            return N % 5;
        return -1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;

        cin >> N;

        Solution ob;
        cout << ob.matchGame(N) << endl;
    }
    return 0;
}