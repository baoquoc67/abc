#include <iostream>
#include <cmath>
#define MAX 100
#define sbd 45
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void nhapMang(float a[],int n){
	for(int i=0;i<n;i++){
		cout<<"nhap a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<endl;
}
int timX(float a[],int n,float x){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]>=x)
			count++;
	}
	return count;
}
void xuatDay(float a[],int n,int k){
	if(k>=1 && k<=n){
		cout<<a[k]<<endl;
	}
	for(int i=0;i<n;i++){
		if(i==k)
			continue;
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void xuatDay2(float a[],int n){
	bool t=false;
	float temp;
	for(int i=0;i<n;i++){
		if(a[i]>sbd){
			t=1;
			temp=i;
			break;
		}	
	}
	if(t=1){
		for(int i=temp;i<n;i++){
			
			cout<<a[i]<<"\t";
		}
		cout<<endl;
	}
		
}
int main(int argc, char** argv) {
	float a[MAX],x;
	int n,k;
	cout<<"nhap n: ";
	cin>>n;
	nhapMang(a,n);
	cout<<"nhap x: ";
	cin>>x;
	cout<<"co"<<timX(a,n,x)<<" lon hon or bang x "<<endl;
	cout<<"nhap k: ";
	cin>>k;
	xuatDay(a,n,k);
	xuatDay2(a,n);
	return 0;
}
