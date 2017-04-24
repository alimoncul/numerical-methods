#!/usr/bin/python3
# -*- coding: utf-8 -*-
import time
def f(x):
    return(x**24-120)

x1 = int(input("bir başlangıç değeri girin: "))
x3 = int(input("ikinci başlangıç değerini girin: "))

while(1):
    start = time.perf_counter()
    x2 = x1 - (f(x1)*(x3-x1))/(f(x3)-f(x1))
    x1,x3 = x3,x2
    if(f(x2)<0.000000000001):
        end = time.perf_counter()
        break

print("x2:",x2,"x1:",x1,"x3:",x3,"timer:",(end-start))
