#include <iostream>
#include <cstdlib>
#include <ctime>

int angka_random(){
  srand(time(0));
  int angka = rand() % 100 + 1;
  return angka;
}

using namespace std;
int main () {
  int angka_acak = angka_random();
  int angka_tebakan;
  cout<<"PROGRAM TEBAK ANGKA 1 - 100"<<endl;
  cout<<endl;
  int i = 7;
  do{
    cout<<"sisa kesempatan : "<<i<<endl;
    cout<<"Masukan tebakan : ";
    cin>>angka_tebakan;
    if(angka_tebakan > angka_acak){
      cout<<"Terlalu besar"<<endl;
      cout<<endl;
    }else if(angka_tebakan < angka_acak){
      cout<<"Terlalu kecil"<<endl;
      cout<<endl;  
    }else if(angka_tebakan == angka_acak){
      cout<<"SELAMAT TEBAKAN ANDA BENAR"<<endl;
      cout<<endl;
      break;
    }
    i--;
  }while(i > 0);
  if(i == 0){
    cout<<"YAH KESEMPATAN ANDA HABIS"<<endl;
  }

  return 0;
}
