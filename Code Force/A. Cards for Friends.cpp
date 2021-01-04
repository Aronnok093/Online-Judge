#include <bits/stdc++.h>
using namespace std;
void solve ()
{

	return;
}

int main ()
{
	int test,i,j,k;
	cin >> test;
	for (int i = 1; i <=test; i++)
	{
	    int w, h, n,res=1;
	    cin >> w >> h >> n;
	    while (w % 2 == 0 || h % 2 == 0)
	    {
		    if (w % 2 == 0)
		    {
			    w /= 2;
			    res*= 2;
		    }
		    else if (h % 2 == 0)
		    {
			    h /= 2;
			    res *= 2;
		}
	}
	if (res>= n)
		cout << "YES";
	else
		cout << "NO";
	cout << endl;
	}
	return 0;
}
