
        #include<iostream>
        using namespace std;
        void number(int arr[],unsigned long long int n)
        {
            int i;
            arr[19] = 0;
            for(;n;)
            {
                i = n%10;
                if(i != 0)
                {
                    arr[arr[19]] = i;
                    arr[19]++;
                 }
                 n = n/10;
            }
            return ;
        }
         
        void take()
        {
            unsigned long long int n;
            cin >> n;
            int isit,i,j;
            int arr[20];
            for(;;n++)
            {
                number(arr,n);
                isit = 1;
                for(i = 0;i < arr[19];i++)
                {
                    if(n%arr[i] != 0)
                    {
                        isit = 0;
                        break;
                    }
                }
                if(isit == 1)
                {
                    break;
                }
            }
            cout << n << endl;
        }
         
        int main()
        {
            int t;
            cin >> t;
            for(;t;t--)
            {
                take();
            }
            return 0;
        }
