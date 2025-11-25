#include <iostream>
using namespace std;

void Konversi(int bilangan, int &km, int &m, int &cm, int &mm);
int km,m,cm,mm,hasil[4],penyebut[4]={1000000,1000,10,1};

int main(){
    int bilangan;
    cout<<"\n Silahkan Masukan Bilangan (dalam MM): ";cin>>bilangan;
    
    Konversi(bilangan, km, m, cm, mm);
    cout<<"\n Hasil Konversi : "<<km<<" km, " <<m<<" m, "<<cm<<" cm, "<<mm<<" mm";
}

void Konversi(int bilangan, int &km, int &m, int &cm, int &mm){
    for(int i=0;i<4;i++){
        hasil[i]=bilangan/penyebut[i];
        bilangan %= penyebut[i];
    }
    km=hasil[0];
    m=hasil[1];
    cm=hasil[2];
    mm=hasil[3];
}
