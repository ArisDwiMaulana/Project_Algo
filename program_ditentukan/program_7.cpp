#include <iostream>
using namespace std;
string terbilang(int angka){
  string angka_terbilang[11] = {
    "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delepan", "sembilan", "sepuluh", "sebelas"
  };
  return angka_terbilang[angka-1];
}

void hasil_terbilang(int angka){
  int sisa = angka % 10;
  int digit_awal_puluhan = angka/10;
  if(angka >= 1 && angka <= 11){
    cout<<"Terbilang : "<<terbilang(angka)<<endl;
  }else if(angka >= 12 && angka <= 19){
    cout<<"Terbilang : "<<terbilang(sisa)<<" belas"<<endl;
  }else if(angka >= 20 && angka <= 99){
    if(sisa == 0){
      cout<<"Terbilang : "<<terbilang(digit_awal_puluhan)<<" puluh"<<endl;
    }else if(sisa != 0){
      cout<<"Terbilang : "<<terbilang(digit_awal_puluhan)<<" puluh "<<terbilang(sisa)<<endl;
    }
  }else{
    cout<<"Input anda diluar jangkauan"<<endl;
  }
}
int main () {
  int input_bilangan = 0; 
  string pilih;
  do{
   cout<<"Masukan angka : ";
   cin>>input_bilangan;
   hasil_terbilang(input_bilangan);

   cout<<"Ulangi (y/t) : ";
   cin>>pilih;
   cout<<endl; 
  }while(pilih != "t");

  return 0;
}
