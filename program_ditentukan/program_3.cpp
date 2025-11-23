#include <iostream>
using namespace std;
void jumlahDanRerata(int& jumlah, float& rerata){
  int nilai[10] = {2, 5, 1, 2, 4, 6, 3, 2, 7, 1};
  float jml_nilai_bersyarat = 0;
  for(int i = 0; i<10; i++){
    if (nilai[i] < 5 || nilai[i] >= 7) {
      jumlah += nilai[i];
      jml_nilai_bersyarat++;
    }
  }
  rerata = jumlah/jml_nilai_bersyarat;
}
int main () {
  int jumlah = 0;
  float rerata = 0;
  jumlahDanRerata(jumlah, rerata);
  cout<<"Jumlah dari nilai yang < 5 atau >= 7 : "<<jumlah<<endl;
  cout<<"Rearata dari nilai yang < 5 atau >= 7 : "<<rerata<<endl;

  return 0;
}
