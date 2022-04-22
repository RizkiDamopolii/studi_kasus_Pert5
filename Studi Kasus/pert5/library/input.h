using namespace std;



void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << nama<<endl;
      tulis_data << nim<<endl;
      tulis_data << matkul;
			tulis_data.close();
}

private:
ofstream tulis_data;
string nama, nim; 
int matkul ;
};