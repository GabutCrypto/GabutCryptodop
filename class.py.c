print ("HY MAU CARI HP HARGA BERAPA")
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
        
hp = Vivo("Vivo","5 Gb","5000 mah\n")
hp1 = Oppo("Oppo","8 Gb","6000 mah")  
 
hp.cek_spec_hp()
hp1.cek_spec_hp()
    