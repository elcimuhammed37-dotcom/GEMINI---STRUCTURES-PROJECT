#include <iostream>
#include <string>

using namespace std;

//struct yapýlarý
struct Esya {
    string ad;
    int guc;
};


struct Istatistik {
    int can;
    int seviye;
};


struct Karakter {
    string isim;
    Istatistik ozellikler; 
    Esya envanter[3];      
};
 // fonksiyon kýsýmlarý
void bilgiYazdir(struct Karakter k);
void hasarAl(Karakter &k, int hasar);
void medic(Karakter &k);
void seviyeYüksel(Karakter& k, int upgrade);
void newItem(Karakter& k, string name, int power, int slot);
struct Karakter creative();

int main() {
    struct Karakter alien;
    alien.isim = "alien";
    alien.ozellikler.can = 100;
    alien.ozellikler.seviye = 1;
    alien.envanter[0].ad = " wood sword ";
    alien.envanter[0].guc = 20;
    
    Karakter created;
    created = creative() ;
   
    return 0;
}
void bilgiYazdir(struct Karakter k) {
    cout << "karakterin ismi " << k.isim << " karakterin özellikleri: can = " << k.ozellikler.can << "karakterin seviyesi = " << k.ozellikler.seviye << endl;
    cout << "----------------------------------------\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " esya ve gucu " << k.envanter[i].ad << "  " << k.envanter[i].guc << endl;
    }
}
void hasarAl(Karakter &k, int hasar) {
    k.ozellikler.can -= hasar;
    cout << " kalan can " << k.ozellikler.can;
}
void medic(Karakter& k) {
    k.ozellikler.can = 100;
    cout << "  The character's health is fully restored.  \n";
}
void seviyeYüksel(Karakter& k, int upgrade) {
    k.ozellikler.seviye += upgrade;
    cout << " new level reached \n";
}
void newItem(Karakter& k, string name, int power, int slot) {
    k.envanter[slot].ad = name;
    k.envanter[slot].guc = power;
    cout << "New item added to inventory. \n";
}
struct Karakter creative() {
    Karakter newK;
    newK.isim = " tyroon \n";
    newK.ozellikler.seviye = 50;
    newK.ozellikler.can = 500;
    return newK;
}