// Problem: Maximum Diamonds
// Date: 14th June
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxDiamonds(int a[], int n, int k)
    {
        long long d = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(a[i]);
        }
        long long t;
        while (k-- && k >= 0)
        {
            t = pq.top();
            d += t;
            pq.pop();
            pq.push(t / 2);
        }
        return d;
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
        int A[N];

        for (int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        cout << ob.maxDiamonds(A, N, K) << endl;
    }
    return 0;
}