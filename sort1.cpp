#include <iostream>
using namespace std;
int main(){
	int data[10],i,j,tmp;
	cout<<"program mengurutkan angka kecil ke besar"<<endl;
	for(i=0; i<10; i++){
		cout<<"masukan angka ke "<<(i+1)<<" : ";
		cin>>data[i];
	}
	cout<<"data sebelum diurutkan : "<<endl;
	for(i=0; i<10; i++){
		cout<<data[i]<<" ";
	}
	
	for(i=0; i<9; i++){
		for(j=i+1; j<10; j++){
			if(data[i]>data[j]){
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}
	
	cout<<"\ndata setelah diurutkan : "<<endl;
	for(i=0; i<10; i++){
		cout<<data[i]<<" ";
	}
}