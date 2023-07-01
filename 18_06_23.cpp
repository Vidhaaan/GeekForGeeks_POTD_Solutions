// Problem: Ticket Counter
// Date: 18th June
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distributeTicket(int n, int k)
    {
        deque<int> q;
        for (int i = 1; i <= n; i++)
            q.push_back(i);
        int cnt = 1;
        int curr = q.front();
        while (!q.empty())
        {
            if (cnt % 2 == 1)
            {
                for (int i = 0; i < k; i++)
                {
                    if (!q.empty())
                    {
                        curr = q.front();
                        q.pop_front();
                    }
                }
            }
            else
            {
                for (int i = 0; i < k; i++)
                {
                    if (!q.empty())
                    {
                        curr = q.back();
                        q.pop_back();
                    }
                }
            }
            cnt++;
        }
        return curr;
    }
};

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        Solution obj;
        int res = obj.distributeTicket(N, K);

        cout << res << endl;
    }
}