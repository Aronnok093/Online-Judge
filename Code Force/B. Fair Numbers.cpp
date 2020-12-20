    #include<bits/stdc++.h>
    using namespace std;

    int main(){

        unsigned long long int n,m,temp;
        long long int t;
        bool ans;
        cin>>t;
        while(t--){
            cin>>n;
            for(unsigned long long int i=n; ;i++){
                    ans=true;
                    temp=i;
                while(temp!=0){
                    if(temp%10==0)
                        temp=temp/10;
                    else if(i%(temp%10)!=0){
                        ans=false;
                        break;
                    }
                    else
                        temp=temp/10;

                }
                if(ans){
                    cout<<i<<endl;
                    break;
                }
            }


        }
        return 0;

    }
