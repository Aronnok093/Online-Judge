    #include <bits/stdc++.h>
     
    using namespace std;
     
    void solve ()
    {
    	int n;
    	
    	cin >> n;
    	
    	string s1, s2;
    	
    	cin >> s1 >> s2;
    	
    	int r, b, e;
    	
    	r = b = e = 0;
    	
    	for (int i = 0; i < n; i++)
    	{
    		if (s1[i] > s2[i])
    			r++;
    		else if (s1[i] < s2[i])
    			b++;
    		else
    			e++;
    	}
    	
    	if (e == n)
    		cout << "EQUAL"<<endl;
    	else if (r > b)
    		cout << "RED"<<endl;
    	else if (b > r)
    		cout << "BLUE"<<endl;
    	else if (r == b)
    		cout << "EQUAL"<<endl;
    		
    	
    	return;
    }
     
    int main (void)
    {
    	int cases;
    	
    	cin >> cases;
    	
    	for (int i = 0; i < cases; i++)
    		solve ();
    		
    	return 0;
    }
