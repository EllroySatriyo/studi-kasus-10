#include <iostream>
#include <string>
using namespace std;

class Base{
   public:
        void input();
        void proses();
        void output();
   private:
        int n,i;
        string *nim;
        string *nama;
        string namamhs[30];
        string nimmhs[21];
};

void Base::input(){
  cout<<"Masukan Banyak Data Juara :";
  cin>>n;
  for(i=0;i<n;i++){
    cout<<"\nData ke-"<<i+1<<endl;
    cout<<"Nama : ";
    cin>>namamhs[i];
    cout<<"Nim  : ";
    cin>>nimmhs[i];
    }
}

void Base::proses(){
  nim = new string[i];
  nama = new string[i];
  for(i=0;i<n;i++){
    *nama=namamhs[i];
    nama += 1;
    *nim=nimmhs[i];
    nim += 1;
    }
  cout<<"\n==================================="<<endl;
  cout<<"     Menampilkan alamat memori     "<<endl;
  cout<<"==================================="<<endl;
  for(i=0;i<n;i++){
    cout<<"\nData ke-"<<i+1<<endl;
    cout<<"Nama : "<<&nama[i]<<endl;
    cout<<"Nim  : "<<&nim[i]<<endl;
    }
}

void Base::output(){
  nim -=n;
  nama-=n;
  cout<<"\n!!! Selamat !!!"<<endl; 
  cout<<"\n============================================"<<endl;
  cout<<"PEMENANG LOMBA PARMATIKA YANG LOLOS KE FINAL"<<endl;
  cout<<"============================================"<<endl;
   for(i=0;i<n;i++){
    cout<<"\nJuara ke-"<<i+1<<endl;
    cout<<"Nama : "<<*nama<<endl;
    nama += 1;
    cout<<"Nim  : "<<*nim<<endl;
    nim  += 1;    
     }
  cout<<endl;
}