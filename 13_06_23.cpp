// Problem: k largest elements
// Date: 13th June

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> kLargest(int arr[], int n, int k)
    {
        sort(arr, arr + n, greater<int>());
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}