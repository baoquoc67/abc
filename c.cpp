#include <iostream>
using namespace std;
#define MAX 100
#define msv 45
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void nhapMang(int a[][MAX],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}
void xuatMang(int a[][MAX],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
int demMSV(int a[][MAX],int n,int m){
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]>msv)
				count++;
		}
	}
	return count;
}
void chuyenAm(int a[][MAX],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]<0)
				a[i][j]=0;
		}
	}
	xuatMang(a,n,m);
}
int tamGiacDuoi(int a[][MAX],int n,int m){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i>j && a[i][j]==0)
				sum=sum+a[i][j];
		}
	}
	return sum;
}
int main(int argc, char** argv) {
	
	int a[][MAX],n,m;
	nhapMang(a,n,m);
	xuatMang(a,n,m);
	cout<<demMSV(a,n,m)<<"lon hon msv"<<endl;
	chuyenAm(a,n,m);
	cout<<tamGiacDuoi(a,n,m)<<"la tong tam giac duoi"<<endl;
	return 0;
}
