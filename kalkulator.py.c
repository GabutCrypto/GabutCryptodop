def tambah (x, y):
    return x + y

def kurang (x, y):
    return x - y

def kali (x, y):
    return x * y

def bagi (x, y):
    return x / y

print ("pilih kak")
print ("\n1. tambah")
print ("2. kurang")
print ("3. kali")
print ("4. bagi")

pilih = input ("\npilih kak (1)(2)(3)(4)\t:")

num1 = int(input("\n.......:"))
num2 = int(input(".......:"))

if pilih == "1":
    print ("hasil =>",num1,"+",num2,"=",tambah (num1, num2))
elif pilih == "2":
    print ("hasil =>",num1,"-",num2,"=",kurang (num1, num2))
elif pilih == "3":
    print ("hasil =>",num1,"*",num2,"=",kali (num1, num2))
elif pilih == "4":
    print ("hasil =>",num1,"/",num2,"=",bagi (num1, num2))