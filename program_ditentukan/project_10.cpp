#include <iostream>
using namespace std;

int main(){
    string data, data1;
    string proses[3];

    cout << "Kalimat : ";
    getline(cin, data);
    data += " ";   // tambahkan spasi supaya kata terakhir ikut diproses

    int kata = 0;
    for (size_t i = 0; i < data.length(); i++){
        data1 += data[i];

        if (data[i] == ' '){
            proses[kata] = data1;
            kata += 1;
            data1 = "";
        }
    }

    cout << "Hasil = ";
    for (int i = 2; i >= 0; i--){
        cout << proses[i];
    }
}
