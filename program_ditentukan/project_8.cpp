#include <iostream>
using namespace std;
bool isexit=false;

int jumlahTim;
void inputData(string namaTim[],int &jumlahTim);
void tampilkanData(string namaTim[],int jumlahTim);

int main(){
    cout<<"\n Input Jumlah Tim yang berpartisipasi : ";cin>>jumlahTim;
    cin.ignore();
    int inputMenu;

    string namaTim[jumlahTim];
    do{
        cout<<"\n ==== Data Kejuaran Piala Dunia =======";
        cout<<"\n1. Input Data Team \n2. Tampilkan Data \n3. Exit \n Pilihan Anda: ";cin>>inputMenu;
        cin.ignore();
        switch(inputMenu){
            case 1:
                inputData(namaTim,jumlahTim);
            break;
            case 2:
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
    
    for(int i=0;i<jumlahTim;i++){
       cout<<"\n Input nama tim ke -"<<i+1<<":"; 
       getline(cin,namaTim[i]);
    }
}

void tampilkanData (string namaTim[],int jumlahTim){
    cout<<"\n Berikut Data "<<jumlahTim <<" Tim yang Berpartisipasi di Piala Dunia";
    int i = 0;
    while(i < jumlahTim){
        cout << "\n Tim ke-" << i+1 << ": " << namaTim[i];
        i++;
    }
}
