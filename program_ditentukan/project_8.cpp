#include <iostream>
using namespace std;
bool isexit=false;

int jumlahTim,jumlahPemain,ulang=1;
string namaTim[100],namaPemain[100][100],nomorPunggung[100][100],posisiPemain[100][100],negara[100][100],TTL[100][100];
void inputData(string namaTim[],int &jumlahTim);
void tampilkanData(string namaTim[],int jumlahTim);

int main(){
    int inputMenu;
    
    do{
        do{
            cout<<"\n ==== Data Kejuaran Piala Dunia =======";
            cout<<"\n1. Input Data Team \n2. Tampilkan Data \n3. Exit \n Pilihan Anda: "; cin>>inputMenu;
            if(cin.fail()){
                cin.clear();
                cin.ignore(1000,'\n');
                cout<<"\n Input Harus angka";
                ulang=0;
            }else{
                ulang=1;
            }
            system("cls");
        }while(ulang==0);

            
            switch(inputMenu){
                case 1:
                    system("cls");
                    inputData(namaTim,jumlahTim);
                break;
                case 2:
                    system("cls");
                    tampilkanData(namaTim,jumlahTim);
                break;
                case 3:
                    isexit= true;
                break;
                default:
                    cout<<" \n pilihan anda tidak valid";
                break;
            }
    }while(isexit== false);
}

void inputData(string namaTim[],int &jumlahTim){
    
    cout<<"\n Input Jumlah Tim yang berpartisipasi : ";cin>>jumlahTim;
    cout<<"\n Masukan Jumlah Pemain : ";cin>>jumlahPemain;
    cin.ignore();
    if(jumlahTim == 0 || jumlahPemain == 0 ){
        cout<<"\n\n ****** Jumlah Tim atau Pemain tidak Boleh 0 *********";
        return;
    }
    for(int i=0;i<jumlahTim;i++){
        system("cls");
        cout<<"\n ---------------------------------------------------------------";
        cout<<"\n Input nama tim ke -"<<i+1<<":"; 
        getline(cin,namaTim[i]);
        for (int j=0;j<jumlahPemain;j++){
            cout<<"\n\n          Nama Pemain ke-"<<j+1<<": ";getline(cin,namaPemain[i][j]);
            cout<<"\n          Nomor Punggung : ";getline(cin,nomorPunggung[i][j]);
            cout<<"\n          Posisi Pemain  : ";getline(cin,posisiPemain[i][j]);
            cout<<"\n          Negara Asal    : ";getline(cin,negara[i][j]);
            cout<<"\n          Tanggal Lahir  : ";getline(cin,TTL[i][j]);
            cout<<"\n ---------------------------------------------------------------";
        }
    }
    
}

void tampilkanData (string namaTim[],int jumlahTim){
    if(jumlahTim ==0 ){
        cout<<"\n\n ******* Data Tim Belum di Input ********";
        return;
    }
    
    system("cls");
    cout<<"\n Berikut Data "<<jumlahTim <<" Tim yang Berpartisipasi di Piala Dunia";
    int i = 0;
    for(int i=0;i<jumlahTim;i++){
        cout<<"\n--------------------------------------------------";
        cout<<"\n Tim ke-" << i+1;
        cout<<"\n Nama Tim : "<<namaTim[i];
        
        for (int j=0;j<jumlahPemain;j++){
            cout<<"\n\n         Nama Pemain ke-"<<j+1<<": "<<namaPemain[i][j];
            cout<<"\n          Nomor Punggung : "<<nomorPunggung[i][j];
            cout<<"\n          Posisi Pemain : "<<posisiPemain[i][j];
            cout<<"\n          Negara Asal : "<<negara[i][j];
            cout<<"\n          Tanggal Lahir : "<<TTL[i][j];
            
        }
        cout<<"\n--------------------------------------------------";
    }
}
