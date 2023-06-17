// Problem: Queue Operations
// Date: 17th June
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	unordered_map<int, int> freq;
	void insert(queue<int> &q, int k)
	{
		freq[k]++;
	}
	int findFrequency(queue<int> &q, int k)
	{
		return freq[k];
	}
};

int main()
{

	int testcase;
	cin >> testcase;

	while (testcase-- > 0)
	{
		queue<int> q;
		int n, k;
		cin >> n;
		Solution obj;

		for (int i = 0; i < n; i++)
		{
			cin >> k;
			obj.insert(q, k);
		}

		int m;
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> k;
			int f = obj.findFrequency(q, k);
			if (f != 0)
			{
				cout << f << endl;
			}
			else
			{
				cout << "-1\n";
			}
		}
	}
	return 0;
}