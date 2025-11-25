#include <iostream>
#include <iomanip>
using namespace std;

int inputWarna;
string dataWarna[12]={
    "Orange","Red-Orange","Red",
    "Red-Violet","Violet","Blue-Violet",
    "Blue","Blue-Green","Green",
    "Yellow-Green","Yellow","Yellow-Orange"
};
int notasiWarna[12]={
    2,3,1,
    3,2,3,
    1,3,2,
    3,1,3
};

void splitCom();
void Complimentary();
void Anagolous();
void TriadicCom();
void TetradCom();

int main(){
int index=0;
string notasi,sifat,nama,NIM;
char inputCom;

    cout<<"\n---------------------------------------------------------------------------------------------";
    cout<<"\n              Nama    : ";getline(cin,nama);
    cout<<"\n              NIM     : ";cin>>NIM;
    cout<<"\n---------------------------------------------------------------------------------------------";
    cout<<"\n\n\n Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis \n Warna-Warna: "<<endl;

    for(int i = 0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<right<<setw(4)<<index+1<<". "<<left<<setw(25)<<dataWarna[index];
            index++;
        }
        cout<<endl;
    }
    do{
        cout<<"\n\n Pilih Warna Nomor :  ";cin>>inputWarna;
        if(cin.fail()|| inputWarna <1||inputWarna>12){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"\n input Tidak Valid";
        }
    }while(cin.fail()|| inputWarna <1||inputWarna>12);

    int indexWarna= inputWarna-1;

    if(notasiWarna[indexWarna]== 1)notasi="Primer";
    else if(notasiWarna[indexWarna]== 2)notasi="Sekunder";
    else if(notasiWarna[indexWarna]== 3)notasi="Tersier";

    cout<<"\n Notasi Warna : "<<notasi;
    
    if(inputWarna<7)sifat="Hangat";
    else if(inputWarna>6)sifat="Sejuk";

    cout<<"\n Sifat Warna "<<" : "<<sifat;
    do{
        cout<<"\n\n Perpaduan Warna Harmonis "
        <<"\na. Perpaduan Warna Analogus"
        <<"\nb. Perpaduan Warna Complementary"
        <<"\nc. Perpaduan Warna Spilt Complementary"
        <<"\nd. Perpaduan Warna Triadic Complementary"
        <<"\ne. Perpaduan Warna Tetrad Complementary"
        <<"\n Pilih :";cin>>inputCom;
        if(cin.fail()||(inputCom!='a' && inputCom!='b' && inputCom!='c' && inputCom!='d' && inputCom!='e')){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"\n input tidak valid";
        }
    }while(cin.fail() || (inputCom!='a' && inputCom!='b' && inputCom!='c' && inputCom!='d' && inputCom!='e'));
    

    switch(inputCom){
        case 'a':// analogus
            Anagolous();
        break;
        case 'b'://complementary
            Complimentary();
        break;
        case 'c'://split Complementary
            splitCom();
        break;
        case 'd'://Triadic Complementary
            TriadicCom();
        break;
        case 'e'://Tetrad Complementary 
            TetradCom();
        break;
        default:
            cout<<"\n Inputan anda tidak terdapat dalam menu";
        break;

    }
}
void TetradCom(){
    int right= (inputWarna+2)%12;
    int left = (inputWarna-2+12)%12;
    int across=(inputWarna+5)%12;
    cout<<"\n Perpaduan Warna Tetrad Complementary dengan warna nomor :"<<right<<", "<<left<<" dan "<<across;
    
}

void TriadicCom(){
    int right = (inputWarna+3)%12;
    int left=(inputWarna-3+12)%12;
    cout<<"\n Perpaduan Warna Triadic Complementary dengan warna nomor :"<<right<<" dan "<<left;
    
}
void Anagolous(){
    int right1 = (inputWarna+2)%12;
    int right2 =(inputWarna+3)%12;
    int left1= ((inputWarna-2+12)%12)+1;
    int left2=((inputWarna-3+12)%12)+1;

    cout<<"\n Perpaduan Warna Anlogus dengan warna nomor :"<<endl
    <<right1<<","<<right2<<" atau "
    <<left1<<","<<left2<<" atau "
    <<right1<<","<<left1;
}
void Complimentary(){
    int comColor= (inputWarna+5)%12;
    cout<<"\n Perpaduan Warna Complementary dengan warna : "<<dataWarna[comColor];
}

void splitCom(){
    int right= (inputWarna+5)%12;
    int left =(inputWarna+7)%12;
    cout<<"\n Perpaduan Warna Split Complementary dengan warna : "<<right<<" dan "<<left;
}
