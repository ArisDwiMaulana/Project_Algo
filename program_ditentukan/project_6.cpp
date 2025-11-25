#include <iostream>
using namespace std;

void konversi (int bilangan, int *jam, int *menit, int *detik);

int main(){
    int bilangan, jam, menit, detik;
    cout<<"\n ========= Konversi Input Bilangan Satuan Detik ke dalam satuan Jam, menit dan Detik =================";
    cout<<" \n Silahkan Input Bilangan :";cin>>bilangan;
    cout<<bilangan <<" detik =";

    konversi(bilangan, &jam, &menit, &detik);
    cout<<jam<<" jam "<<menit <<" menit "<<detik <<" detik";

}

void konversi (int bilangan, int *jam, int *menit, int *detik){
    *jam= bilangan/3600;
    bilangan%= 3600;

    *menit= bilangan/60;
    bilangan%= 60;

    *detik= bilangan/1;
}
