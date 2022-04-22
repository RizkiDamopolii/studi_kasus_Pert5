using namespace std;

class Output{
public:
  void cetak(){
    cout<<"Nama Mahasiswa = "<<data_file[0]<<endl;
    cout<<"NIM Mahasiswa = "<<data_file[1]<<endl;
    cout<<"|No. | Daftar Matkul | SKS |";
    for (int i=1; i<=data_file[2]; i++)
		{
				cout<<"| "<<data_file[i]<<" | "<< data_file[i]<<"|"<<endl; 
		}
    cout<<"Total = "<<data_file[i]<<endl;
  } 

  void getData(){
  	ambil_data.open("api_data.txt");
  	while(!ambil_data.eof()){
    	ambil_data >> data_file[index];
    	index += 1;
  	}
  	ambil_data.close();
  }

private:
  int data_file[30];
  int index = 0; 
  ifstream ambil_data;
};