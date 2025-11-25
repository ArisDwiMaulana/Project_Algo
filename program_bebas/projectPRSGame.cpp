#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int inputPlayer;
string obj[3]={"Rock", "Paper","Scissors"};

int main(){
    cout<<"\n ===================== Rock Paper Scissors SHooot Game ===========================";
    cout<<"\n\n                    1. Rock  2. Paper  3.Scissors   ";
    cout<<"\n =================================================================================";
    cout<<"\n Masukan Pilihan Anda : ";cin>>inputPlayer;
    
    int i=inputPlayer-1;
    cout<<"\n   Pilihan Anda : "<<obj[i];

    srand(time(0));
    int computer = rand()%3+1;
    int indx=computer-1;
    cout<<"\n   Computer Pilih : "<<obj[indx];
    
    if(inputPlayer == computer){
        cout<<"\n   Result TIEEE!!!!";
    }else if((inputPlayer == 1 && computer == 3)||(inputPlayer == 2 && computer == 1)||(inputPlayer == 3 && computer == 2)){
        cout<<"\n   Congrats You win againts The Computer";
    }else{
        cout<<"\n   Resulttt Nice Try;))";
    }

}  