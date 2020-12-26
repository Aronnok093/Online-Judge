#include <bits/stdc++.h>

using namespace std;

bool p (int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

int main (void)
{
	vector <char> v (10);
	vector <int> res;

	string s = "";

	for (int i = 0; i < 10; i++)
		cin >> v[i];

	for (int i = 0; i < 10; i++)
	{
		if (v[i] == '*')
		{
			if (i == 9)
			{
				s += '0';
			}
			else
			{
				s += (i + 1) + '0';
			}
		}
	}

	do
	{
		if (s[0] != '0')
		{
			int t = stoi (s);

			if (p (t))
				res.push_back (t);
		}

	}
	while (next_permutation (s.begin (), s.end ()));

	if (res.empty ())
	{
		cout << ":-(" << endl;
	}
	else
	{
		sort (res.begin (), res.end ());

		cout << res[0] << endl;
	}

	return 0;
}
