#include <iostream>
using namespace std;

void Konversi(int bilangan, int &km, int &m, int &cm, int &mm);
int km,m,cm,mm;
int main(){
    int bilangan;
    cout<<"\n Silahkan Masukan Bilangan (dalam MM): ";cin>>bilangan;
    
    Konversi(bilangan, km, m, cm, mm);
    cout<<"\n Hasil Konversi : "<<km<<" km, " <<m<<" m, "<<cm<<" cm, "<<mm<<" mm";
}

void Konversi(int bilangan, int &km, int &m, int &cm, int &mm){
    km = bilangan/1000000;
    bilangan %= 1000000;
    
    m = bilangan/1000;
    bilangan %= 1000;
    
    cm = bilangan/10;
    bilangan %= 10;
    
    mm = bilangan/1;

}
