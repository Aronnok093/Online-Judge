
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int test,i,j,k;
	cin>>test;
	for (i = 1; i<=test; i++)
	{
	    int num,cnt1=0,cnt2=0;
	    cin >> num;
	    for (j = 1; j <= num; j++)
	    {
		    int temp;
		    cin >> temp;
		    if (temp == 1)
			    cnt1++;
		    else
			    cnt2++;
	    }
	    int flag=1;
	    if (cnt1 % 2 != 0)
		    flag =0;
	    else if (cnt2 % 2 != 0)
	    {
		    if (!(cnt1))
			    flag= 0;
	    }

	    if (flag)
		    cout << "YES";
	    else
		    cout << "NO";
		cout<<endl;
	}
	return 0;
}
