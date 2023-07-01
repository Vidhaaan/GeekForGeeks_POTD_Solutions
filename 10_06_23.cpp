// Problem: Arranging the array
// Date: 10th June
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
public:
    void Rearrange(int arr[], int n)
    {
        queue<int> Mh;
        queue<int> mh;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                Mh.push(arr[i]);
            }
            else
            {
                mh.push(arr[i]);
            }
        }
        int i = 0;
        while (!mh.empty())
        {
            arr[i] = mh.front();
            mh.pop();
            i++;
        }
        while (!Mh.empty())
        {
            arr[i] = Mh.front();
            Mh.pop();
            i++;
        }
        // Your code goes here
    }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long j = 0;
        Solution ob;
        ob.Rearrange(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends