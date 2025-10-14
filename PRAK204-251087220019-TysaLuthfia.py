jar      = float(input("Jari-jari       : ")) 
ti        = float(input("Tinggi        : ")) 
vol = jar * jar * ti * 22 / 7
lu = 2 * jar * (jar + ti) * 22 / 7
kel = 2 * jar * 22 / 7
print("Hasil Volume	= {:.2f} ".format(vol))
print("Hasil Luas	= {:.2f} ".format(lu))
print("Keliling	= {:.2f} ".format(kel))
