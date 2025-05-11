#include <iostream>
#include <conio.h>
using namespace std;

void dMenu(){
    system("cls");
    cout << "Aplikasi Exchange Sort" << "\n";       
    cout << "1. Memasukkan data" << "\n";            
    cout << "2. Menampilkan data" << "\n";            
    cout << "3. Sorting" << "\n";           
    cout << "4. Sepatah Kata" << "\n";            
    cout << "5. Exit" << "\n";           
    cout << "Masukan angka :";        
}

void input(int data[]){
    system("cls");
    
    // Memasukkan data
    cout << "Masukkan 5 angka: ";
    for (int i = 0; i < 5; i++) {
        cin >> data[i];
    }
    getch();
}

void output(int data[]){
    system("cls");

    // Menampilkan data
    cout << "\nData yang Anda masukkan adalah:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Angka ke-" << (i + 1) << ": " << data[i] << endl;
    }
    getch();
}

void sorting(int data[]) {
    system("cls");
    
    // Exchange Sort
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (data[i] > data[j]) {
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    cout << "Data setelah diurutkan (dari kecil ke besar):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << (i + 1) << ": " << data[i] << endl;
    }
    getch();
}

void sepatahKata(){
    system("cls");
    cout << "Follow IG @dyyyy.b";
    getch();
}

int main() {
    int data[5];
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl)
        {
        case '1':
            input(data);
            break;
        case '2':
            output(data);
            break;  
        case '3':
            sorting(data);
            break;  
        case '4':
            sepatahKata();
            break;  
        case '5':
            break;
        default:
            system("cls");
            cout << "Pilihan Tidak Tersedia";
            getch();
            break;
        }
    } while (pl != '5');
    
    return 0;
}