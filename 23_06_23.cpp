// Problem: Task Scheduler
// Date: 23th June
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int leastInterval(int N, int K, vector<char> &tasks)
    {

        int maxi = 0;
        int max_count = 0;

        map<char, int> mp;
        for (auto it : tasks)
        {
            mp[it]++;
            maxi = max(mp[it], maxi);
        }

        for (auto it : mp)
        {
            if (it.second == maxi)
                max_count++;
        }

        int ans = max(N, max_count + ((maxi - 1) * (K + 1)));
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++)
            cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}