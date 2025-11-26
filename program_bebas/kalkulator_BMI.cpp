#include <iostream>
using namespace std;

double hitungBMI(double berat_badan, double tinggi_badan){
  double BMI = berat_badan/(tinggi_badan*tinggi_badan);
  return BMI;
}

void klasifikasi(string jenis_kelamin, double berat_badan, double tinggi_badan){
  double BMI = hitungBMI(berat_badan, tinggi_badan);
  if(jenis_kelamin == "laki-laki"){
    if(BMI < 17){
      cout<<"BMI anda "<<BMI<<" (kurus)"<<endl;
    }else if(BMI >= 17 && BMI <= 23){
      cout<<"BMI anda "<<BMI<<" (normal)"<<endl;
    }else if(BMI > 23 && BMI <= 27){
      cout<<"BMI anda "<<BMI<<" (kegemukan)"<<endl;
    }else if(BMI > 27){
      cout<<"BMI anda "<<BMI<<" (obesitas)"<<endl;
    }
  }else if(jenis_kelamin == "perempuan"){
    if(BMI < 18){
      cout<<"BMI anda "<<BMI<<" (kurus)"<<endl;
    }else if(BMI >= 18 && BMI <= 25){
      cout<<"BMI anda "<<BMI<<" (normal)"<<endl;
    }else if(BMI > 25 && BMI <= 27){
      cout<<"BMI anda "<<BMI<<" (kegemukan)"<<endl;
    }else if(BMI > 27){
      cout<<"BMI anda "<<BMI<<" (obesitas)"<<endl;
    }

  }
}
int main () {
  double berat_badan, tinggi_badan;
  string jenis_kelamin;
  cout<<"PROGRAM KALKULATOR BODY MASS INDEX"<<endl;
  cout<<endl;
  do{
    cout<<"Jenis Kelamin (laki-laki/perempuan) : ";
    cin>>jenis_kelamin;
    if(!(jenis_kelamin == "laki-laki" || jenis_kelamin == "perempuan")){
      system("cls");
      cout<<"Input tidak valid"<<endl;
      cout<<endl;
    }
  }while(!(jenis_kelamin == "laki-laki" || jenis_kelamin == "perempuan"));
  cout<<"Berat Badan (Kg) : ";
  cin>>berat_badan;
  cout<<"Tinggi Badan (m) : ";
  cin>>tinggi_badan;
  cout<<endl;
  klasifikasi(jenis_kelamin, berat_badan, tinggi_badan);

  return 0;
}
