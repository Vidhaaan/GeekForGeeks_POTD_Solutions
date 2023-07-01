// Problem: Lemonade Change
// Date: 22th June
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool lemonadeChange(int n, vector<int> &bills)
    {
        int five = 0, ten = 0;
        for (int i = 0; i < n; i++)
        {
            if (bills[i] == 5)
            {
                five++;
            }
            else if (bills[i] == 10)
            {
                ten++;
                if (five >= 1)
                    five--;
                else
                    return false;
            }
            else
            {
                if (ten >= 1 && five >= 1)
                {
                    ten--;
                    five--;
                }
                else if (five >= 3)
                {
                    five -= 3;
                }
                else
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++)
            cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}