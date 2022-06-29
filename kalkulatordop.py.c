def jumlah(a,b):
    result = a+b
    print ("a+b",result)
def kurang(a,b):
    result = a-b
    print ("a-b",result)
def kali(a,b):
    result = a*b
    print ("a*b",result)
def bagi(a,b):
    result = a/b
    print ("a/b",result)
    
print("pilih kak")  
print("(+)","(-)","(x)","(:)\n")
    
op=input("pilih operasi..:")
a=int(input("angka1..:"))
b=int(input("angka2..:"))

if op =="+":
    jumlah(a,b)
elif op =="-":
    kurang(a,b)
elif op =="x":
    kali(a,b)
elif op ==":":
    bagi(a,b)