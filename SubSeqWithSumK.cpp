#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	priority_queue<int, vector<int>> pq;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		pq.push(a[i]);
	}
	int s = 0;
	int c = 0;
	while (!pq.empty())
	{
		s += pq.top();
		c++;
		pq.pop();
		if (s >= k)
		{
			break;
		}
	}
	if (s < k)
	{
		cout << "-1\n";
	}
	else
	{
		cout << c << "\n";
	}
	return 0;
}