#include <iostream>
#include <fstream>
using namespace std;
class Proses{
public:
int totalmatkul;
int i = 1;
int totalbayar = 0;
int jumlahsks[10], totalsks = 0;
string namamatkul[30];
  void Hitung(int totalmatkul,int i){
      if(i > totalmatkul){
        totalbayar = totalbayar - (totalbayar * 0.10);
        totalbayar = totalbayar - (totalbayar * 0.05);
      }else{
        cout<<" Masukan mata kuliah : ";
        cin>>namamatkul[i];
        cout<<" Masukan jumlah sks : ";
        cin>>jumlahsks[i];
        bayar[i] = hargasks * jumlahsks[i];
        totalsks += jumlahsks[i];
        totalbayar += bayar[i];
        Hitung(totalmatkul, i+1);
      }
  }
private:
  int bayar[10];
  int hargasks = 125000;
};


class Input {
private:
public:
int matkul;
string nama, nim;
void cetak_input (){
  cout<<"Masukkan Nama Anda : ";
  getline(cin,nama);
  cout<<"Masukkan NIM Anda : ";
  cin>>nim;
  cout<<"Masukkan Banyak Matkul : ";
  cin>>matkul;
}
};

class Output{
public:
int jumlahsks[10];
int totalsks;
int matkul ;
int totalmatkul;
int i = 1;
string nama, nim, namamatkul[10];
  void cetak_output(){
    cout<<"Nama Mahasiswa = "<<nama<<endl;
    cout<<"NIM Mahasiswa = "<<nim<<endl;
    cout<<"|No. | Daftar Matkul | SKS |"<<endl;
    for (int i=1; i<= matkul; i++)
		{
				cout<<"| "<<i<<"  |  "<<namamatkul[i]<<"  |  "<< jumlahsks[i]<<" |"<<endl;
		}
    cout<<"\nTotal SKS = "<<totalsks;
    cout<<"\nTotal = "<<totalmatkul<<endl;
  } 
};
 
int main() {
  Input input;
  input.cetak_input();
  
  Proses proses;
  proses.totalmatkul = input.matkul;
  proses.Hitung(proses.totalmatkul, proses.i);

  Output output;
  output.nama = input.nama;
  output.nim = input.nim;
  for(int i = 1; i <= proses.totalmatkul; i++){
    output.namamatkul[i] = proses.namamatkul[i];
    output.jumlahsks[i] = proses.jumlahsks[i];
  }
  output.matkul = proses.totalmatkul;
  output.totalmatkul = proses.totalbayar;
  output.totalsks = proses.totalsks;
  output.cetak_output();
  return 0;
}