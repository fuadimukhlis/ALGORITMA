#include <iostream>
using namespace std;

int main(){
	int target;
	int data[10]={11,22,33,44,55,66,77,88,99,100};
	int low,mid,high, ditemukan=0;
	cout<<"data array\n";
	for (int i=0; i<10; i++){
		cout<<data[i]<<" ";
	}
	cout<<"\nMasukan angka yang di cari: ";
	cin>>target;
	low=0;
	high=9;
	while (low<=high){
		mid=(low+high)/2;
		if(target == data[mid]){
			ditemukan = 1;
			cout<<"nilai yang di cari terdapat pada data ke "<<mid+1;
			break;
		} else if(target>data[mid]){
			low=mid+1;
		} else if(target<data[mid]){
			high=mid-1;
		}
	}
	if (ditemukan == 0){
		cout<<"nilai yang di cari tidak ditemukan";
	}
}