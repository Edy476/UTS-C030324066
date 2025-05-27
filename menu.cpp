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

void input(int data[], int &n){
    system("cls");

    cout << "Berapa banyak angka yang ingin Anda masukkan (maks 100)? ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Jumlah tidak valid. Angka harus antara 1-100.";
        n = 0; // Reset n
    } else {
        for (int i = 0; i < n; i++) {
            cout << "Masukkan angka ke-" << (i + 1) << ": ";
            cin >> data[i];
        }
    }
   
    if (n < 1 || n > 100)
    {
        cout << endl << "maaf tidak bisa memasukkan data :(" ;
    } else{

        cout << "Data anda telah disimpan ^_^";
    }
    
    getch();
}

void output(int data[], int n){
    system("cls");

    if (n == 0) {
        cout << "Belum ada data yang dimasukkan.\n";
    } else {
        cout << "\nData yang Anda masukkan adalah:\n";
        for (int i = 0; i < n; i++) {
            cout << "Angka ke-" << (i + 1) << ": " << data[i] << endl;
        }
    }

    getch();
}

void sorting(int data[], int n) {
    system("cls");

    if (n == 0) {
        cout << "Belum ada data yang dimasukkan.\n";
    } else {
        // Exchange Sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (data[i] > data[j]) {
                    int tukar = data[i];
                    data[i] = data[j];
                    data[j] = tukar;
                }
            }
        }
        //output hasil data yg disorting
        cout << "Data setelah diurutkan (dari kecil ke besar):\n";
        for (int i = 0; i < n; i++) {
            cout << "Angka ke-" << (i + 1) << ": " << data[i] << endl;
        }
    }

    getch();
}

void sepatahKata(){
    system("cls");
    cout << "Follow IG @dyyyy.b";
    getch();
}

int main() {
    int data[100];
    int n = 0; // jumlah data aktif
    char pl;

    do {
        dMenu();
        pl = getch();
        switch (pl)
        {
        case '1':
            input(data, n);
            break;
        case '2':
            output(data, n);
            break;  
        case '3':
            sorting(data, n);
            break;  
        case '4':
            sepatahKata();
            break;  
        case '5':
        cout << endl << "anda telah keluar dari menu";
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
