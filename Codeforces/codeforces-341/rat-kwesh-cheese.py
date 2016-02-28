def calc1 (x, y, z):
    x = x*10
    y = y*10
    z = z*10
    return x**(y**z);
 
def calc2 (x, y, z):
    x = x*10
    y = y*10
    z = z*10
    aux = y*z;
    return x**aux;
 
def format (c):
    if c == 0:
        return "x^y^z"
    elif c == 1:
        return "x^z^y"
    elif c == 2:
        return "(x^y)^z"
    elif c == 3:
        return "(x^z)^y"
    elif c == 4:
        return "y^x^z"
    elif c == 5:
        return "y^z^x"
    elif c == 6:
        return "(y^x)^z"
    elif c == 7:
        return "(y^z)^x"
    elif c == 8:
        return "z^x^y"
    elif c == 9:
        return "z^y^x"
    elif c == 10:
        return "(z^x)^y"
    elif c == 11:
        return "(z^y)^x"
   
   
x, y, z = map(float, raw_input().split());
 
a = []
a.append (calc1(x, y, z))
a.append (calc1(x, z, y))
a.append (calc2(x, y, z))
a.append (calc2(x, z, y))
a.append (calc1(y, x, z))
a.append (calc1(y, z, x))
a.append (calc2(y, x, z))
a.append (calc2(y, z, x))
a.append (calc1(z, x, y))
a.append (calc1(z, y, x))
a.append (calc2(z, x, y))
a.append (calc2(z, y, x))
 
ans = 0
e = -1
for i, elem in enumerate(a):
    if (e == -1):
        e = i
        ans = elem
    else:
        if (elem > ans):
            ans = elem
            e = i
 
print format(e)
