#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void delayLirik(const string& lirik, double delay) {
    for (char huruf : lirik) {
        cout << huruf << flush;
        this_thread::sleep_for(chrono::milliseconds(static_cast<int> (delay*1000)));
    } // pakai include <thread> dan include <chrono>
    cout << endl;
}

void decemberAgain() {
    delayLirik("Pain is never permanent, but", 0.10);
    delayLirik("tonight it's killing me", 0.09);
    delayLirik("I hope you get your ball room floor", 0.07);
    delayLirik("Your perfect house with rose red doors", 0.08);
    delayLirik("I'm the last thing you'd remember", 0.10);
    delayLirik("It's been a long lonely December", 0.10);
}

void sPleasure() {
    delayLirik("Soul try to figure it out", 0.10);
    delayLirik("From where I've been escapin'", 0.12);
    delayLirik("Running to end all the sin", 0.12);
    delayLirik("Get away from the pressure", 0.12);
    delayLirik("Wondering to get a love that is so pure", 0.16);
    delayLirik("Gotta have to always make sure", 0.13);
    delayLirik("That I'm not just somebody's pleasure", 0.12);
}

void yourSong(){
    delayLirik("Ayo ayo",0.1);
    delayLirik("ganyang",0.1);
    delayLirik("fufufafa",0.1);
    delayLirik("ganyang",0.1);
    delayLirik("fufufafa",0.1);
    delayLirik("Sekarang juga",0.1);
    delayLirik("Semuanyaaa",0.1);
}

int main() {
    int pilihan;
    cout << "\n----Pilih lagu favorit anda----\n" << endl;
    cout << "[1] Neckdeep - December Again\n";
    cout << "[2] Aziz Hedra - Somebody's Pleasure\n";
    cout << "[3] your fav Song\n" << endl;
    cout << "Masukan pilihan (1-3): ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "\n==== Neckdeep - December Again ====\n" << endl;
        decemberAgain();
    } else if (pilihan == 2) {
        cout << "\n==== Aziz Hedra - Somebody's Pleasure ====\n" << endl;
        sPleasure();
    } else if (pilihan == 3) {
        cout << "\n==== your fav Song ====\n" << endl;
        yourSong();
    } else {
        cout << "Harap masukan pilihan lagu yang tersedia.";
    }
    
    return 0;
}
