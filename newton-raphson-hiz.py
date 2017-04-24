#!/usr/bin/python3
# -*- coding: utf-8 -*-
import time
def f(x):
    return(343*x**2-834*x-543)

def fi(x):
    return(686*x-834)
x1 = int(input("bir başlangıç değeri girin: "))

while(1):
    start = time.perf_counter()
    x2 = x1 - f(x1)/fi(x1)
    if(f(x2)<0.000000000001):
        end = time.perf_counter()
        break
    x1 = x2
print("x1: ",x1,"timer: ",(end-start))
