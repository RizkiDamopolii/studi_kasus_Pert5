#include <iostream>
using namespace std;
class Proses {
public:
char totalmatkul;
int i = 1;
   void getData(){
  	ambil_data.open("api_data.txt");
  	while(!ambil_data.eof()){
    	ambil_data >> data_file[index];
    	index += 1;
  	}
  	ambil_data.close();
    data_file[2] = (int)totalmatkul;
  }
  void tulis(){
    tulis_data.open("api_data.txt");
    tulis_data<<data_file[0]<<endl;
    tulis_data<<data_file[1]<<endl;
  }
  void Hitung(int totalmatkul,int i){
      if(i > totalmatkul){
        totalbayar = totalbayar - (totalbayar * 0.10);
        totalbayar = totalbayar - (totalbayar * 0.5);
        tulis_data<<totalbayar;
        exit(0);
      }else{
        cout<<" Masukan mata kuliah : ";
        cin>>matkul[i];
        tulis_data<<matkul[i]<<endl;
        cout<<" Masukan jumlah sks : ";
        cin>>jumlahsks[i];
        tulis_data<<jumlahsks[i]<<endl;
        bayar[i] = hargasks * jumlahsks[i];
        totalbayar += bayar[i];
        Hitung(totalmatkul, i+1);
      }
  }
  void selesaitulis(){
    tulis_data.close();
  }
private:
  ifstream ambil_data;
  ofstream tulis_data;
  string data_file[10];
  int totalbayar = 0;
  int bayar[10];
  int hargasks = 125000;
  int index = 0;
  int jumlahsks[10];
  string matkul[30];
};