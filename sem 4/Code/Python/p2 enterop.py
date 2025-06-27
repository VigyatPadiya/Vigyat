a=int(input("enter first num :"))
b=int(input("enter second number :"))
op=input("enter any arithmatic operator :")
add=a+b
sub=a-b
mul=a*b
div=a/b
if op=='+':
    print("addition",add)
elif op=='-':
    print("subtraction",sub)
elif op=='/':
    print("divition",div)
else:
    print("multiplication",mul)
