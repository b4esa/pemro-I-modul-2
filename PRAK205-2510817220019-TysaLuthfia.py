import math

A = int (input())
B = int (input())

alas = math.sqrt(B * B - A * A)
kel = math.sqrt (A + B + alas)
lu = math.sqrt (A * alas / 2)

print(f"Alas         = {alas:.0f} cm")
print(f"Tinggi       = {A:.0f} cm")
print(f"Keliling     = {kel:.0f} cm")
print(f"Luas         = {lu:.0f} cm^2")
A, B = map(int, input().split())

alas = math.sqrt(B * B - A * A)
kel = math.sqrt (A + B + alas)
lu = math.sqrt (A * alas / 2)

print(f"Alas         = {alas:.0f} cm")
print(f"Tinggi       = {A:.0f} cm")
print(f"Keliling     = {kel:.0f} cm")
print(f"Luas         = {lu:.0f} cm^2")