/*
Date: 7 Oktober 2025
Time: 25M 58S
Desc: Analisis Statistik
Seorang analis data, Dr. Stat, ingin membuat program cepat untuk menghitung rata-rata (mean) dan nilai tengah (median) dari sekumpulan data.
Bantulah Dr. Stat dengan membuat program yang menerima sejumlah data dari pengguna, lalu menampilkan hasil analisisnya.

Format Input
Baris pertama: Sebuah integer N yang menandakan jumlah data.
Baris berikutnya: N buah angka (bisa float atau double).

Format Output
Baris pertama: Data yang sudah diurutkan.
Baris kedua: Nilai rata-rata.
Baris ketiga: Nilai median.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N, swap;
    cin >> N;
    float score[N], total = 0, median;
    
    // input and calculate total of scores
    for (int i = 0; i < N; i++){
        cin >> score[i];
        total += score[i];
    }
    
    // calculate mean
    float mean = total/N;
    
    // sort from lowest to highest
    for (int i = 0; i < N-1; i++){
        for (int j = 0; j < N-i-1; j++){
            if (score[j] > score[j+1]){
                swap = score[j];
                score[j] = score[j+1];
                score[j+1] = swap;
            }
        }
    }
    
    // output sorted data
    cout << "Data Terurut: [";
    for (int i = 0; i < N; i++){
        cout << score[i];
        if (i < N-1){
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    // calculate median
    if (N%2 == 1){
        median = score[int(N/2)];
    } else{
        median = (score[(N/2)-1] + score[N/2])/2.0;
    }
    
    // output mean and median
    cout << "Rata-rata (Mean): " << fixed << setprecision(2) << mean << endl << "Median: " << fixed << setprecision(1) << median;
    
    return 0;
}