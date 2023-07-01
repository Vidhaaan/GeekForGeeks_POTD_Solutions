// Problem: Rearrange an array with O(1) extra space
// Date: 19th June
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    // with O(1) extra space.
    void arrange(long long arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] += (arr[arr[i]] % n) * n;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] /= n;
        }
        return;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        long long A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        Solution ob;
        ob.arrange(A, n);
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}