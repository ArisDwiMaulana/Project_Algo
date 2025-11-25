#include <iostream>
using namespace std;

void identitas(){
  cout<<"---------------------------------------------------------------"<<endl;
  cout<<"                    Nama  : Aris Dwi Maulana                   "<<endl;
  cout<<"                    NIM   : 123250130                          "<<endl;
  cout<<"---------------------------------------------------------------"<<endl;
  cout<<endl;;
}

void bangun_datar(){
  cout<<"1. Persegi"<<endl;
  cout<<"2. Persegi Psnjang"<<endl;
  cout<<"3. Segitiga"<<endl;
  cout<<"4. Lingkaran"<<endl;
  cout<<"5. Jajargenjang"<<endl;
  cout<<"6. Belahketupat"<<endl;
  cout<<"7. Layang-layang"<<endl;
  cout<<"8. Trapesium"<<endl;
}

void bangun_ruang(){
  cout<<"1. Kubus"<<endl;
  cout<<"2. Balok"<<endl;
  cout<<"3. Tabung"<<endl;
  cout<<"4. Bola"<<endl;
  cout<<"5. Kerucut"<<endl;
  cout<<"6. Limas Segitiga"<<endl;
  cout<<"7. Limas Segiempat"<<endl;
  cout<<"8. Prisma Segitiga"<<endl;
}

void menu(int& pilih_pengukuran, int& pilih_bangun){
  cout<<"Program menghitung luas bangun datar atau volume bangun ruang"<<endl;
  cout<<"Bangun Datar[1] / Ruang[2] : ";
  cin>>pilih_pengukuran;
  cout<<endl;

  if(pilih_pengukuran == 1){
    cout<<"Menghitung luaas bangun datar :"<<endl;
    bangun_datar();
  }else if(pilih_pengukuran == 2){
    cout<<"Menghitung volume bangun ruang :"<<endl;
    bangun_ruang();
  }
  cout<<"Pilihan = ";
  cin>>pilih_bangun;
  cout<<endl;
}

void luas_persegi(){
  int sisi;
  cout<<"Menghitung luas persegi"<<endl;
  cout<<"Masukan panjang sisi : ";
  cin>>sisi;
  cout<<"Luas persegi = "<<sisi*sisi<<endl;
}

void luas_persegi_panjang(){
  int panjang = 0, lebar = 0;
  cout<<"Menghitung luas persegi panjang"<<endl;
  cout<<"Masukan panjang : ";
  cin>>panjang;
  cout<<"Masukan lebar : ";
  cin>>lebar;
  cout<<"Luas persegi panjang = "<<panjang*lebar<<endl;
}

void luas_segitiga(){
  double alas, tinggi;
  cout<<"Menghitung luas segitiga"<<endl;
  cout<<"Masukan panjang alas : ";
  cin>>alas;
  cout<<"Masukan tinggi : ";
  cin>>tinggi;
  cout<<"Luas segitiga = "<<alas*tinggi/2<<endl;
}


void luas_lingkaran(double PI){
  double jari_jari;
  cout<<"Menghitung luas Lingkaran"<<endl;
  cout<<"Masukan panjang jari-jari : ";
  cin>>jari_jari;
  cout<<"Volume Lingkaran = "<<PI*jari_jari*jari_jari<<endl;
}

void luas_jajargenjang(){
  int alas, tinggi;
  cout<<"Menghitung luas jajar genjang"<<endl;
  cout<<"Masukan panjang alas : ";
  cin>>alas;
  cout<<"Masukan tinggi : ";
  cin>>tinggi;
  cout<<"Luas jajar genjang = "<<alas*tinggi<<endl;
}

void volume_kubus(){
  int sisi;
  cout<<"Menghitung volume kubus"<<endl;
  cout<<"Masukan panjang sisi : ";
  cin>>sisi;
  cout<<"Volume kubus = "<<sisi*sisi*sisi<<endl;
}

void volume_balok(){
  int panjang, lebar, tinggi;
  cout<<"Menghitung volume balok"<<endl;
  cout<<"Masukan panjang : ";
  cin>>panjang;
  cout<<"Masukan lebar : ";
  cin>>lebar;
  cout<<"Masukan tinggi : ";
  cin>>tinggi;
  cout<<"Volume balok = "<<panjang*lebar*tinggi<<endl;
}

void volume_tabung(double PI){
  double jari_jari, tinggi;
  cout<<"Menghitung volume tabung"<<endl;
  cout<<"Masukan panjang jari-jari : ";
  cin>>jari_jari;
  cout<<"Masukan tinggi : ";
  cin>>tinggi;
  cout<<"Volume tabung = "<<PI*jari_jari*tinggi<<endl;
}

void volume_bola(double PI){
  double jari_jari;
  cout<<"Menghitung volume bola"<<endl;
  cout<<"Masukan panjang jari-jari : ";
  cin>>jari_jari;
  cout<<"Volume bola = "<<(4/3)*PI*jari_jari*jari_jari*jari_jari<<endl;
}

void volume_kerucut(double PI){
  double jari_jari, tinggi;
  cout<<"Menghitung volume kerucut"<<endl;
  cout<<"Masukan panjang jari-jari : ";
  cin>>jari_jari;
  cout<<"Masukan tinggi : ";
  cin>>tinggi;
  cout<<"Volume kerucut = "<<PI*jari_jari*jari_jari*tinggi/3<<endl;
}

int main(){
  int pilih_bangun = 0, pilih_pengukuran = 0;
  const double PI = 3.14;
  identitas();
  menu(pilih_pengukuran, pilih_bangun);
  switch(pilih_bangun){
    case 1:
      if(pilih_pengukuran == 1){
        luas_persegi();
      }else if(pilih_pengukuran == 2){
        volume_kubus();
      }
      break;
    case 2:
      if(pilih_pengukuran == 1){
        luas_persegi_panjang();
      }else if(pilih_pengukuran == 2){
        volume_balok();
      }
      break;
    case 3:
      if(pilih_pengukuran == 1){
        luas_segitiga();
      }else if(pilih_pengukuran == 2){
        volume_tabung(PI);
      }
      break;
    case 4:
      if(pilih_pengukuran == 1){
        luas_lingkaran(PI);
      }else if(pilih_pengukuran == 2){
        volume_bola(PI);
      }
      break;
    case 5:
      if(pilih_pengukuran == 1){
        luas_jajargenjang();
      }else if(pilih_pengukuran == 2){
        volume_kerucut(PI);
      }

      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    default:
      cout<<"Menu yang anda pilih tidak ada"<<endl;
      break;
  }

  return 0;
}
