#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string kondisi (string player, string enemy){
    if(player == "batu"){
        if(enemy == "batu"){
            return "seri";
        }else if(enemy == "gunting"){
            return "menang";
        }else if(enemy == "kertas"){
            return "kalah";
        }
    }else if(player == "gunting"){
        if(enemy == "batu"){
            return "kalah";
        }else if(enemy == "gunting"){
            return "seri";
        }else if(enemy == "kertas"){
            return "menang";
        }
    }else if(player == "kertas"){
        if(enemy == "batu"){
            return "menang";
        }else if(enemy == "gunting"){
            return "kalah";
        }else if(enemy == "kertas"){
            return "seri";
        }
    }
    return "";
}

void tampilan (string player, string enemy){
    string hasil = kondisi(player, enemy);
    cout << "Anda dinyatakan " << hasil << endl;
}

int main(){
    srand(time(0)); // include <ctime>
    string isi[3] = {"batu", "gunting", "kertas"};
    int pilihan, enemy;
    string ulang;

    do {
        for (int i = 0; i < 3; i++){
            cout << i+1 << ". " << isi[i] << endl;
        }

        cout << "pilihan: "; cin >> pilihan;
        enemy = (rand() % 3) + 1; // include<cstdlib>
        
        cout << "==========================" << endl;

        if (pilihan > 0 && pilihan <= 3){
            cout << "Player : " << isi[pilihan-1] << endl;
            cout << "Enemy : " << isi[enemy-1] << endl;
            tampilan(isi[pilihan-1], isi[enemy-1]);
        } else {
            cout << "Harap masukan pilihan (1-3)" << endl;
        }

        cout << "Main lagi? <y/n> "; cin >> ulang;
    } while (ulang == "y");
    
    cout << "Game telah berakhir." << endl;
    return 0;
}
