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

void volume_kubus(){
  int sisi;
  cout<<"Menghitung volume kubus"<<endl;
  cout<<"Masukan panjang sisi : ";
  cin>>sisi;
  cout<<"Volume kubus = "<<sisi*sisi*sisi<<endl;
}

int main(){
  int pilih_bangun = 0, pilih_pengukuran = 0;
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
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
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
