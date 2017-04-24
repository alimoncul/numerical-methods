#!/usr/bin/python3
# -*- coding: utf-8 -*-
import time
def f(x):
    return(343*x**2-834*x-543)
x1 = float(input("ilk degere tahminini girin: "))
x2 = float(input("ikinci degere tahminini girin: "))

if(f(x1)*f(x2)==0):
    print("girdiğiniz değerlerden biri denklemin köküdür")
elif(f(x1)*f(x2)>0):
    print("girdiğiniz aralıkta denklemin bir kökü yoktur")
else:
    while(1):
        start = time.perf_counter()
        xr = (x1+x2)/2
        if(f(x1)*f(xr)<0):
            x2 = xr
        else:
            x1 = xr
        if(f(x1)<0.000000000001):
            end = time.perf_counter()
            break
print("x1:",x1,"x2:",x2,"xr:",xr,"timer:",(end-start))
