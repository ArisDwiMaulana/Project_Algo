#include <iostream>
using namespace std;

int n,j=0;
string kalimat,temp;

int main (){
    cout<<"+------------------------------------------------------------------+"<<endl;
    cout<<"      Masukan Kalimat : "; getline(cin, kalimat);
    cout<<"      Berapa Jumlah Kata dalam kalimat : ";cin>>n;
    
    string Arrkalimat[n];
    kalimat+=" ";
    
    for(int i=0;i<kalimat.length();i++){
        
        if(kalimat[i] != ' '){
            temp+=kalimat[i];
        }else{
            Arrkalimat[j]=temp;
            j++;
            temp="";
        }
    }
    
    cout<<"      Hasil           : ";
    
    for(int i=j-1; i>=0;i--){
        cout<<Arrkalimat[i]<<" ";
    }
    
    cout<<"\n+------------------------------------------------------------------+"<<endl;
}
