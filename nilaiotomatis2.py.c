nama = input ("nama :")
kls = input ("kls  :")
nilai = int (input("nilai :"))

print ("×"*20)

if nilai >= 80:
    print ("nama : "+nama)
    print ("kls  :"+kls)
    print ("nilai: A")
elif nilai >= 70:
    print ("nama : "+nama)
    print ("kls  :"+kls)
    print ("nilai: B")
elif nilai >= 60:
    print ("nama : "+nama)
    print ("kls  :"+kls)
    print ("nilai: C")
elif nilai >= 40:
    print ("nama : "+nama)
    print ("kls  :"+kls)
    print ("nilai: TIDAK LULUS")   
    