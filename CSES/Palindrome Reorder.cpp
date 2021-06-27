#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,sz,bijor=0,bijorloc;
    string s;
    char in;
    vector<int>vec(27,0);
    cin>>s;

    sz= s.size();


    for(i=0;i<sz;i++){
        vec[s[i]-'A']++;
    }
    for(i=0;i<26;i++){
        if(vec[i]%2==1){
            bijor++;
            bijorloc=i;
        }
    }
    if(bijor>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(i=0;i<26;i++){
                if(i!=bijorloc)
            for(j=1;j<=vec[i]/2;j++){
                char x='A'+i;
                cout<<x;
            }
        }
        if(bijor==1){
        for(i=0;i<vec[bijorloc];i++){
            // printf("%c",65+bijorloc);
            char x = 'A'+bijorloc;
            cout<<x;
        }
        }
        for(i=25;i>=0;i--){
                if(i!=bijorloc)
            for(j=1;j<=vec[i]/2;j++){
                //printf("%c",65+i);
                char x='A'+i;
                cout<<x;
            }
        }
cout<<endl;
    }



return 0;
}
