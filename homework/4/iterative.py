import math

f1=lambda x:(x*x+1)/3
f2=lambda x:math.sqrt(3*x-1)
f3=lambda x:-1/x+3

x1,x2,x3=1,1,1
for i in range(20):
    x1,x2,x3=f1(x1),f2(x2),f3(x3)
    print(f"x1: {x1}\tx2: {x2}\tx3: {x3}")

print(f"ans:   {(3-math.sqrt(5))/2}    and    {(3+math.sqrt(5))/2}")