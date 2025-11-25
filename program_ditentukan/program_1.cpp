#include <iostream>
using namespace std;

//fungsi untuk mendapatkan nilai terbesar
int nilai_terbesar(int array[10]){
  int i = 0;
  int nilai_terbesar = array[0]; // inisialisasi nilai nilai_terbesar
  while (i<10) {
    if (nilai_terbesar < array[i]) {
      nilai_terbesar = array[i];
    }
    i++;
  }
  return nilai_terbesar;
}

//fungsi untuk mencari ada berapa nilai terbesar
int banyaknya_nilai_terbesar(int array[10], int nilai_terbesar){
  int i = 0;
  int jumlah = 0;
  while (i<10) {
    if (array[i] == nilai_terbesar) {
      jumlah++;
    }
    i++;
  }
  return jumlah;
}

int main () {
  int nilai_mhs[10];
  int i = 0;
  while (i < 10) {
    int input = 0;
    cout<<"Masukan nilai mahasiswa "<<i+1<<" : ";
    cin>>input;
    nilai_mhs[i] = input;
    i++;
  }

  cout<<endl;
  int nilai_tertinggi = nilai_terbesar(nilai_mhs);
  int banyaknya_nilai_tertinggi = banyaknya_nilai_terbesar(nilai_mhs, nilai_tertinggi);
  cout<<"Nilai tertinggi = "<<nilai_tertinggi<<endl;
  cout<<"Banyaknya mahasiswa memiliki nilai tertinggi = "<<banyaknya_nilai_tertinggi<<endl;
  
  return 0;
}
