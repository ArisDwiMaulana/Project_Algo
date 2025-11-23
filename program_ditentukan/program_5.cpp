#include <iostream>
using namespace std;
void banyakPecahan(long uang, long pecahan[]);
int main () {
  long uang, pecahan[9] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
  //int lembar[9], i;
  cout<<"Jumlah Uang Kembali : Rp ";
  cin>>uang;
  cout<<"Pecahan Uang Kembali : "<<endl;
  banyakPecahan(uang, pecahan);

  return 0;
}
void banyakPecahan(long uang, long pecahan[]){
  int z;
  for (int i = 0; i < 9; i++) {
    z = uang/pecahan[i];
    uang -= z*pecahan[i];
    cout<<z<<" lembar "<<pecahan[i]<<endl;
  }
}
