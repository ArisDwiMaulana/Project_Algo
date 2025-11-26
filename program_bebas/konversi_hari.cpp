#include <iostream>
using namespace std;

void konversi(int hari){
  string satuan[4] = {"Tahun", "Bulan", "Minggu", "Hari"};
  int satuan_dlm_hari[4] = {365, 30, 7, 1};
  int z = 0;
  cout<<"Hasil konversi : ";
  for (int i = 0; i < 4; i++) {
    z = hari/satuan_dlm_hari[i];
    hari -= z*satuan_dlm_hari[i];
    cout<<z<<" "<<satuan[i]<<" ";
  }
  cout<<endl;
}

int main () {
  int hari;
  cout<<"PROGRAM KONVERSI HARI KE SATUAN TAHUN, BULAN, MINGGU, HARI"<<endl;
  cout<<endl;
  cout<<"Input banyak hari : ";
  cin>>hari;
  cout<<endl;
  konversi(hari);

  return 0;
}
