p=float(input("Enter P : "))
r=float(input("Enter R : "))
n=float(input("Enter N : "))

ci = p * (1 + r / 100) ** n - p
print("The Compound Interest is ",ci)
