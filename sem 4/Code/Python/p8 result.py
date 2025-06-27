s1=int(input("Enter s1: "))
s2=int(input("Enter s2: "))
s3=int(input("Enter s3: "))
s4=int(input("Enter s4: "))
s5=int(input("Enter s5: "))

total=s1+s2+s3+s4+s5
per=total/5
print("The total is :",total)
print("The Percentage is :",per)
if (s1>=40 and s2>=40 and s3>=40 and s4>=40 and s5>=40):
    print("Result : Pass:)")
    if(per>80):
        print("Grade: A")
    elif(per>60 and per<80):
        print("Grade: B")
    elif(per>40 and per<=60):
        print("Grade: C")
    else:
        print("******")
else:
    print("Sorry Bro Better Luck Next Time :(")
