#include <iostream>
using namespace std;

class Output{
   public:
        void output();
   private:
        int n,i;
        string *nim;
        string *nama;
        string namamhs[100];
        string nimmhs[100];
};

void Output:: output(){
   nama = nama-n;
  nim = nim-n;
  cout<<"\n============================================"<<endl;
  cout<<"PEMENANG LOMBA PARMATIKA YANG LOLOS KE FINAL"<<endl;
  cout<<"============================================"<<endl;
   for(i=0;i<n;i++){
    cout<<"Juara ke-"<<i+1<<endl;
    cout<<"Nama : "<<*nama<<endl;
    cout<<"Nim  : "<<*nim<<endl;
    }
  cout<<endl;
}