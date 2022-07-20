print ("HY MAU CARI HP HARGA BERAPA")
print ("BERIKUT ADALAH")
print ("HP YANG ADA DI TOKO INI")
print("="*20)
class Vivo ():

    def __init__(self, merek, ram, batre):
        self.merek = merek
        self.ram = ram
        self.batre = batre
    def cek_spec_hp (self):
        print ("merek \t:", self.merek)
        print ("ram \t:", self.ram)
        print ("batre \t:", self.batre)

class Oppo (Vivo):
    pass
class Samsung (Vivo):
    pass
        
                    
hp = Vivo("Vivo","5 Gb","5000 mah\n")
hp1 = Oppo("Oppo","8 Gb","6000 mah\n")  
hp2 = Samsung("Samsung","4 Gb","5000 mah")


hp.cek_spec_hp()
hp1.cek_spec_hp()
hp2.cek_spec_hp()

hp = input("\nmau beli HP apa kak :")
    
    
if hp == "vivo":
    print ("\nHarganya cuma 2jt kak")
elif hp == "oppo":
    print ("\nHarganya cuma 1,5jt kak")
elif hp == "samsung":
    print ("\nHarganya cuma 2,1jt kak")
    
print ("="*20)

tanya = input ("gimana cocok kak :")

if tanya == "iya":

    bayar = input("\nmau bayar lewat apa :")
    print ("="*20)
    print ("no \t:")
    print ("sandi \t:")

print ("\nterima kasih")
            

    