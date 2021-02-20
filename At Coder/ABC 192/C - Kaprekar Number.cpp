#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  string x;
  int K;
  cin >> x >> K;
  long g1, g2;

  for(int i=0 ; i < K; i++){
    sort(x.begin(), x.end(), greater<int>());
    g1=atoi(x.c_str());

    sort(x.begin(), x.end());
    g2=atoi(x.c_str());
    x=to_string(g1-g2);
  }

  cout << x;
}
