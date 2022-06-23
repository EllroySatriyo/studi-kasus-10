#include <iostream>
using namespace std;

class Input{
   public:
        void input();
   private:
        int n,i;
        string *nim;
        string *nama;
        string namamhs[100];
        string nimmhs[100];
};

void Input:: input(){
  cout<<"Masukan Banyak Data Juara :";
  cin>>n;
  for(i=0;i<n;i++){
    cout<<"Data ke-"<<i+1<<endl;
    cout<<"Nama : ";
    cin>>namamhs[i];
    cout<<"Nim  : ";
    cin>>nimmhs[i];
    }
}