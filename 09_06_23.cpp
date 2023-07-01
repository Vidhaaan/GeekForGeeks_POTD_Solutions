// Problem: Permutations of a given string
// Date: 9th June
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void solve(vector<string> &ans, string S, int index)
    {
        if (index >= S.size())
        {
            ans.push_back(S);
            return;
        }

        for (int i = index; i < S.size(); i++)
        {
            swap(S[i], S[index]);
            solve(ans, S, index + 1);
            swap(S[i], S[index]);
        }
    }
    vector<string> find_permutation(string S)
    {
        vector<string> ans;
        int index = 0;
        solve(ans, S, index);
        sort(ans.begin(), ans.end());
        set<string> uniqueAnswers;
        for (int i = 0; i < ans.size(); i++)
        {
            uniqueAnswers.insert(ans[i]);
        }
        ans.clear();
        for (const string &answer : uniqueAnswers)
        {
            ans.push_back(answer);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.find_permutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends