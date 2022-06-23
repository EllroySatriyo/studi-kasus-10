#include <iostream>
using namespace std;

class Proses{
   public:
        void proses();
   private:
        int n,i;
        string *nim;
        string *nama;
        string namamhs[100];
        string nimmhs[100];
};

void Proses:: proses(){
     nim = new string[n];
   nama = new string[n];
      for(i=0;i<n;i++){
        *nim = nimmhs[i];
        nim += 1;
        *nama = namamhs[i];
        nama +=1;
      }

  cout<<"\n==================================="<<endl;
  cout<<"     Menampilkan alamat memori     "<<endl;
  cout<<"==================================="<<endl;
  for(i=0;i<n;i++){
    cout<<"Data ke-"<<i+1<<endl;
    cout<<"Nama : "<<&nama<<endl;
    cout<<"Nim  : "<<&nim<<endl;
    }
}