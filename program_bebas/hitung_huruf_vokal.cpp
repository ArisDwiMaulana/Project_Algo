#include <iostream>
using namespace std;

void hitung_vokal(string kalimat){
  char huruf_vokal[5] = {'a', 'i', 'u', 'e', 'o'};
  int jumlah = 0;
  for (size_t i = 0; i < kalimat.size(); i++) {
    char huruf = tolower(kalimat[i]);
    for(int j = 0; j < 5; j++){
      if(huruf == huruf_vokal[j]){
        jumlah++;
      }
    }
  }
  cout<<"Jumlah huruf vokal yang ada = "<<jumlah<<endl;
}

int main () {
  string kalimat;
  cout<<"PROGRAM MENGHITUNG HURUF VOKAL DALAM KALIMAT"<<endl;
  cout<<endl;
  cout<<"Masukan kalimat : ";
  getline(cin, kalimat);
  hitung_vokal(kalimat);

  return 0;
}
