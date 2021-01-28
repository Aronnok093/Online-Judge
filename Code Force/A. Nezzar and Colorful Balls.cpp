#include<bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
int solve(vector<int>arr){

    int ans = 1, temp = 1;


	for (int i = 1; i < arr.size(); i++) {

		if (arr[i] == arr[i - 1]) {
			++temp;
		}
		else {
			ans = max(ans, temp);
			temp = 1;
		}
	}
	ans = max(ans, temp);

	return ans;

}
int main(){
    fs();
    int t;
    cin>>t;
    while(t--){
        int n,x;
        vector<int>arr;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        cout<<solve(arr)<<endl;
        arr.clear();
    }
    return 0;
}
