#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

bool isexit=false;

void KonversiRupiah();
void KonversiMataUangAsing();
double Kurs[10]={16000,17000,11700,110,20000,10500,4300},uang;
string mataUang[7]={"USD","EUR","SGD","JPY","GBP","AUD","SAR"};

int main(){
    int inputMenu;
    do{
        system("cls");
        cout<<"\n +====================== [ Konversi Mata Uang ] ======================+";
        cout<<"\n\n1. konversi Rupiah Ke Mata Uang Asing       \n2. Konversi Mata Uang Asing Ke Rupiah     \n3. Exit  ";
        cout<<"\n +====================================================================+";
        cout<<"\n Masukan Pilihan Anda :";cin>>inputMenu;
        
        switch(inputMenu){
            case 1:
                system("cls");
                KonversiRupiah();
            break;
            case 2:
                system("cls");
                KonversiMataUangAsing();
            break;
            case 3:
                cout<<"\n ===========================================";
                cout<<"\n terimkasih telah mengunjungi laman kami :))";
                cout<<"\n ===========================================";
                isexit=true;
            break;
            default:
                cout<<"\n Input anda tidak valid ";
            break;
        }
    }while(isexit== false);
    }
void KonversiRupiah(){
    int inputCurrency; 

    cout<<"\n===================================================================";
    cout<<"\n                   KONVERSI RUPIAH KE MATA UANG ASING";
    cout<<"\n===================================================================";
    cout<<"\n\n Pilih mata uang tujuan:";
    cout<<"\n ------------------------------------------------------------------";
    cout<<"\n 1.USD - Dollar Amerika \n 2. EUR - Euro \n 3. SGD  - Dollar Singapore \n 4. JPY  - Yen Jepang \n 5.GBP  - Pound Sterling \n 6. AUD  - Dollar Australia \n 7. SAR  - Riyal Arab Saudi \n 8. Kembali ke menu";
    cout<<"\n ------------------------------------------------------------------";
    cout<<"\n Masukan Pilihan Anda :";cin>>inputCurrency;
    cout<<"\n Masukan Jumlah Rupiah :";cin>>uang;
    
    if(inputCurrency== 8){
        return;
    }
    int index=inputCurrency-1;
    double hasilKonversi = uang/Kurs[index];

    cout<<"\n Hasil Konversi : "<<fixed<<setprecision(2)<<hasilKonversi<<" "<<mataUang[index];
    cout<<"\n Tekan enter untuk kembali.......";
    getch();
}
void KonversiMataUangAsing(){
    int inputCurrency;

    cout<<"\n===================================================================";
    cout<<"\n                   KONVERSI MATA UANG ASING KE RUPIAH";
    cout<<"\n===================================================================";
    cout<<"\n\n Pilih mata uang anda:";
    cout<<"\n ------------------------------------------------------------------";
    cout<<"\n 1. USD - Dollar Amerika \n 2. EUR - Euro \n 3. SGD - Dollar Singapore \n 4. JPY - Yen Jepang \n 5. GBP - Pound Sterling \n 6. AUD - Dollar Australia \n 7. SAR - Riyal Arab Saudi \n 8. Kembali ke menu";
    cout<<"\n ------------------------------------------------------------------";
    cout<<"\n Masukan Pilihan Anda :";cin>>inputCurrency;
    cout<<"\n Masukan jumlah lang Anda :";cin>>uang;

    if(inputCurrency== 8){
        return;
    }
    int index=inputCurrency-1;
    double hasilKonversi=uang*Kurs[index];
    cout<<"\n Hasil Konversi : Rp. "<< fixed << setprecision(2)<<hasilKonversi;
    cout<<"\n Tekan enter untuk kembali.......";
    getch();
}