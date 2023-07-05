#include <iostream>
#include <cmath>
#define MAX 100
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//danh sach so le
void soLe(){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%2==1){
			cout<<i<<endl;
		}
	}
	cout<<endl;
}
//tinh tong
void tinhTong(){
	int n,s=0;
	cout<<"nhap n: ";
	cin>>n;
	for(int i=0;i<n;i++){
		s=s+i;
	}
	cout<<"tong la: "<<s<<endl;
}
//dem so chia het cho 7
void demBay(){
	int count=0,n;
	cout<<"nhap n: ";
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%7==0){
			count++;
		}
	}
	cout<<"tong so chia het cho bay: "<<count<<endl;
}
//dem so nguyen to trong day
void demNguyenTo(){
	int count=0,n;
	cout<<"nhap n: ";
	cin>>n;
	if(n<2)
		cout<<"khong co so nguyen to"<<endl;
	else{
		for (int i = 2; i < (n - 1); i++){
	        if (n % i == 0){
	            count++;
	        }   
	    }
	}
	cout<<"tong cac so nguyen to la: "<<count<<endl;
}
//ve kim tu tham nguoc
void Ve(){
	cout<<"*\t*\t*\t*\t*\t*\t*"<<endl;
	cout<<" \t*\t*\t*\t*\t*"<<endl;
	cout<<" \t \t*\t*\t*"<<endl;
	cout<<" \t \t \t*"<<endl;
}
void nhapMang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		cout<<endl;
	}
}
void Chuyen(){
	int n,a[MAX];
	cout<<"nhap n la do dai chuoi nhi phan: ";
	cin>>n;
	nhapMang(a,n);
	int s=0;
	for(int i=0;i<n;i++){
		s=s+a[i]*pow(2,i+1);
	}
	cout<<"sang thap phan la: "<<s/2;
}
int main(int argc, char** argv) {
	sole();
	tinhTong();
	demBay();
	demNguyenTo();
	Ve();
	Chuyen();
	
	return 0;
}
