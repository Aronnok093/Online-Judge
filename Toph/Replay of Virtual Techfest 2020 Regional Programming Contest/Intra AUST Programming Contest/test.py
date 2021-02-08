import math
t=int(input())
for i in range(0,t):
    tt=int(input());
    for i in range(0,tt):
        x=int(input());
        n=2*x;
        r=x;
        ans=math.factorial(n)/(math.factorial(r)*math.factorial(n-r))
        print(round(ans/(x+1)))
    print()
