def fact(n):
    if n==0 or n==1:
        return 1
    else:
        return n*fact(n-1)
num=int(input("Enter a Number: "))
result = fact(num)
print(f"The Factorial of {num} is {result}")

