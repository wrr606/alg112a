from numpy import arange

def check(n,x):
    if n*n-3*n+1<=10**(-x) and n*n-3*n+1>=-10**(-x):
        return True
    return False

x=3
for i in arange(-1000,1000,10**(-x)):
    if check(i,x):
        print(i)