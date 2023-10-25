from engine import Value

a=Value(9)
b=Value(8)
c=Value(7)

step=0.01

for i in range(100):
    f=a**2+b**2+c**2
    #print(f.data)
    f.backward()
    a.data-=a.grad*step
    b.data-=b.grad*step
    c.data-=c.grad*step

print("Final values: a =", a.data, ", b =", b.data, ", c =", c.data)