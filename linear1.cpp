#include <iostream>
using namespace std;

int main(){
	int data [5]={20,37,42,77,86};
	int cari, ditemukan=0;
	
	cout<<"data array\n";
	for (int i=0; i<5; i++){ 
		cout<<data[i]<<" ";
	}
	
	cout<<"\nMasukan nilai yang anda cari : ";
	cin>>cari;
	
	for (int i=0; i<5; i++){
		if (data[i] == cari){
			ditemukan = 1;
			cout<<"nilai yang di cari ada pada data ke "<<i+1;
			break;
		}
	}
	if (ditemukan == 0) {
		cout<<"nilai yang di cari tidak di temukan";
	}
}