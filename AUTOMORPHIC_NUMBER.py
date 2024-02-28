num=int(input("Enter the number : "))
sqr=pow(num,2)
order=len(str(num))
b=pow(10,order)
a=sqr%b
if num==a:
    print("IT IS AUTOMORPHIC")
else:
    print("IT IS NOT AUTOMORPHIC")