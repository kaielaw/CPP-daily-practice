/*
Date: 30 September 2025
Time: 10M 31S
Desc: Membuat program untuk melakukan konversi satuan berat KILOGRAM, GRAM, dan POUND.  
a. Input dalam satuan KILOGRAM, output dalam satuan GRAM dan POUND.  
b. Input dalam satuan GRAM, output dalam satuan KILOGRAM dan POUND.  
c. Input dalam satuan POUND, output dalam satuan KILOGRAM dan GRAM.
*/

#include <iostream>
using namespace std;

int main(){
    double opt, mass, kg, gram, pound;
    
    do{
        cout << "Pilih:" << endl << "1. Input dalam satuan KILOGRAM, output dalam satuan GRAM dan POUND.\n2. Input dalam satuan GRAM, output dalam satuan KILOGRAM dan POUND.\n3. Input dalam satuan POUND, output dalam satuan KILOGRAM dan GRAM.\n-> ";
        cin >> opt;
    } while (opt < 1 || opt > 3);

    cout << "Masukkan massa: ";
    cin >> mass;

    if (opt == 1){
        gram = mass * 1000.0;
        pound = mass * 2.20462;
        cout << gram << " gram dan " << pound << " pound";
    } else if (opt == 2){
        kg = mass/1000.0;
        pound = kg * 2.20462;
        cout << kg << " kg dan " << pound << " pound";
    } else{
        kg = mass/2.20462;
        gram = kg * 1000.0;
        cout << kg << " kg dan " << gram << " gram";  
    }
    
    return 0;
}