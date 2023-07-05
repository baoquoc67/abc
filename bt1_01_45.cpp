#include <iostream>
#include <cmath>
#define MAX 100
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void nhapMang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"nhap a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<endl;
}
int Max(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max)
			max=a[i];
	}
	cout<<endl;
}
int chinhPhuong(int a[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]*a[i]<=n)
			count++;
	}
    return count;
}
int nguyenTo(int a[],int n){
	int count=0;
	if (n < 2){
        return count;
    }       
     
    for (int i = 2; i < (n - 1); i++){
        if (n % i == 0){
            count++;
        }   
    }
    return count;
}
void mangAm(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]<0)
			a[i]=0;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void swap(int &a,int &b){
	int t;
	t=a;
	a=b;
	b=t;
}
void sapXep(int a[],int n){
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                swap(a[i],a[j]);
            }
        }
    }
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}

int main(int argc, char** argv) {
	int a[MAX],n;
	cout<<"nhap n: ";
	cin>>n;
	nhapMang(a,n);
	cout<<"max : "<<Max(a,n)<<endl;
	cout<<"chinh phuong : "<<chinhPhuong(a,n)<<endl;
	cout<<"nguyen to : "<<nguyenTo(a,n)<<endl;
	mangAm(a,n);
	sapXep(a,n);
	return 0;
}
