#include <iostream>
using namespace std;
#define MAX 100
#define msv 45
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void hocBong(){
	float a,b,c,d,e;
	cout<<"nhap diem mon nmlt: ";
	cin>>a;
	cout<<"nhap diem mon hdt: ";
	cin>>b;
	cout<<"nhap diem mon linux: ";
	cin>>c;
	cout<<"nhap diem mon toan: ";
	cin>>d;
	e=(a+b+c+d)/4;
	if(e<7)
		cout<<"khong dc hoc bong"<<endl;
	else if(e<8.5)
		cout<<"hoc bong kha"<<endl;
	else if(e<9)
		cout<<"hoc bong gioi"<<endl;
	else
		cout<<"hoc bong xuat sac"<<endl;
}

int main(int argc, char** argv) {
	hocBong();
	
	return 0;
}
