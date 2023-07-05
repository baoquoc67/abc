#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define PI 3.14
#define max 100
/*int nhapmang(a[];n);
{
	int n,a[max];
	for(int i=0;i<=n;i++)
	{
		cout<<"Nhap gia tri cho phan tu thu"<<"["<<i<<"]: ";
		cin>>a[i];
	}
	return 0;
}*/
#define PI 3.14

int main(int argc, char** argv) {
	//cau 1
	/*int R;
	cout<<"Nhap Ban Kinh hinh tron: ";
	cin>>R;
	cout<<"Dien tich cua hinh tron la: "<<R*R*PI<<endl;
	cout<<"Chu vi cua hinh tron la: "<<R*2*PI<<endl;
	//cau 2
	float s=0,n;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		s=s+1/((n-1)*(n+1));
		cout<<s<<endl;
	}*/
	int n,a[max];
	cout<<"nhap n: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a"<<"["<<i<<"]: ";
		cin>>a[i];
	}
	return 0;
}
