print ("RIZAL ISLAMI")
print ("TI D\n")

print ("="*20)
class andi ():

    def __init__ (self, nama, kls, umur,):
        self.nama = nama
        self.kls = kls
        self.umur = umur

    def identitas_siswa (self):
        print ("nama \t:", self.nama)
        print ("kls \t:", self.kls)
        print ("umur \t:", self.umur)
        
class Dani (andi):
    pass

class Rizal (andi):
    pass
           
  
data1 = andi ("Andi", "TI D", "21\n")   
data2 = Dani ("Dani", "TI A", "19\n")   
data3 = Rizal ("Rizal", "TI C", "20\n")   

data1.identitas_siswa()
data2.identitas_siswa()
data3.identitas_siswa()
   

tanya = input ("\nsiapa nama anda :")

if tanya == "andi":
    print ("\nnilai",tanya, "adalah A")
    
elif tanya == "dani":
    print ("\nnilai",tanya, "adalah B")
    
elif tanya == "rizal":
    print ("\nnilai",tanya, "adalah C")            