import math
aa	= float(input("Masukkan Sisi Tinggi = "))
bb	= float(input("Masukkan sisi Miring = "))
cc = math.sqrt((bb**2)-(aa**2))
kel = aa+bb+cc 
lu = aa*cc/2
print("Alas = {}cm ".format(round(cc))) 
print("Tinggi = {}cm ".format(round(aa))) 
print("Keliling = {}cm ".format(round(kel))) 
print("Luas = {}cm^2 ".format(round(lu)))
