r = float(input("jari-jari : ")) 
ti = float(input("tinggi bejana : ")) 
vol = r * r * ti * 22 / 7
lu = 2 * r * (r + ti) * 22 / 7
kel = 2 * r * 22 / 7
print("Volume = {:.2f} ".format(vol))
print("Luas = {:.2f} ".format(lu))
print("Keliling = {:.2f} ".format(kel))