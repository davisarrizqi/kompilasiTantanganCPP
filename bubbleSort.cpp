#include <iostream>
using namespace std;

class PusatData{
    public:
    int angka[100]; int m1, m2, m3; int jumlahAngka = 6;
    
    void startApp(){
        cout << "<<=== MATH BY DAVISAPP ===>>" << endl;
        cout << "Masukkan Jumlah Angka: ";cin >> jumlahAngka;cout << endl;
        cout << "Silahkan Masukkan Angka: " << endl;
        
        for(int a=0;a<jumlahAngka;a++){
            cout << "Angka ke " << a+1 << ": "; cin >> angka[a]; cout << endl;
        }
        
        cout << "Input Data Sukses!" << endl << "\n";
    }
    
    void lihatHasilnya(){
        cout << "{";
        for(int o=0;o<jumlahAngka;o++){
            if(o!=jumlahAngka-1){
                cout << angka[o] << ", ";
            }
            
            else if(o==jumlahAngka-1){
                cout << angka[o] << "}" << endl;
            }
        }
    }
    
    void startPengurutan(){
        
        startApp();
        
        for(int f=0;f<jumlahAngka;f++){
            for(int s=0;s<jumlahAngka;s++){
                m1 = angka[f]; m2 = angka [s];
                
                if(m1 > m2){
                    m3 = angka[s];
                    angka[s] = angka[f];
                    angka[f] = m3;
                }
            }
            
            lihatHasilnya();
        }
    }
};

int main(){
    PusatData done;
    done.startPengurutan();
    
    return 0;
}
