import math
a	= float(input("A = "))
b	= float(input("B = "))
c = math.sqrt((b**2)-(a**2))
kel = a+b+c 
lu = a*c/2
print("Alas = {}cm ".format(round(c))) 
print("Tinggi = {}cm ".format(round(a))) 
print("Keliling = {}cm ".format(round(kel))) 
print("Luas = {}cm^2 ".format(round(lu)))