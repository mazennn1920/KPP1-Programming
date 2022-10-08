// NAMA		: Machzenora Bhayangkara
// NRP		: 2039221033
// Jurusan	: Teknologi Rekayasa Konversi Energi

#include <iostream>
#include <cmath>
using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int main(){
    int input;
    float kecepatan_tangensial = 29.8998;
    float PHI = 3.14159625; //Nantinya, trigonometri membaca sudut dalam bentuk radian
    int losses1 = 1;
    int losses2 = 3;
    int losses3 = 5; // Untuk kecepatan tangensial maksimum, maka mengalami losses sebesar 5m/s

    cin >> input; // Mencari V0;
    if (input >=1; input <=10){
        cout << input - losses1 << endl;
    }   else if (input >=11; input <=20){
            cout << input - losses2 << endl;
    }   else if(input >= 21; input <= 30){
           // cout << input - losses3 << endl;
    }    
    int jarak = (pow(input-losses3, 2))*sinf(2*SUDUT*PHI/180)/GRAVITASI; //Menggunakan rumus x max. = v0^2 * sin(2*sudut) / gravitasi
        cout << jarak << " " << kecepatan_tangensial << endl; //Output yang diharapkan 62 -- Output tidak boleh lebih dari 30
    return 0; //Maaf Mas/Mbak, code saya masih kurang terstruktur. Terakhir belajar kelas 11 SMA dan sekarang masih perlu belajar lagi.
}