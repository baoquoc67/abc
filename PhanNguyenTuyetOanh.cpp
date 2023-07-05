#include <stdio.h>
#include <stdlib.h> 

/*
	Ma SV: 20042041
	Ho va ten: Phan Nguyen Tuyet Oanh
	Lop: DHTMDT16C
	Bai Thi cuoi ky mon: NMLT
	*/
void nhapMang(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=-50 + rand() % (50 + 1 - (-50));;
	}
}
void xuatMang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[",i,"]=",a[i],"\n");
	}
}
int tinhTongchan(int a[],int n){
	int s=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			s=s+a[i];
		}
	}
	return s;
}
int demLe(int a[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			count++;
		}
	}
	return count;
}
bool checkAm(int a[],int n){
	bool check=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			check=1;
			break;
		}
	}
	return check;
}
void maxAm(int a[],int n){
	if(checkAm(a,n)==1){
		int min=a[0];
		for(int i=0;i<n;i++){
			if(a[i]<min){
				min=a[i];
			}
		}
		printf("so am lon nhat: \n",min);
	}
	else{
		printf("khong co so am: \n");
	}
	
}
int main(int argc, char** argv) {
	
	int a[100],n,chon;
	("Nhap n: \n");
    scanf("%d",&n);
	do{
		printf("Ban hay chon thuc hien 1 trong cac chuc nang ben duoi\n");
		printf("1 Xuat mang: \n");
		printf("2 Tinh tong cac phan tu chan: \n");
		printf("3 dem cac phan tu le: \n");
		printf("4 tim so am lon nhat: \n");
		printf("0. Ket thuc\n");
		printf("Nhap chuc nang muon thuc hien:");
		scanf("%d",&chon);
		switch(chon)
        {
        	case 0:
			{
				break;
			}	
        	case 1:
		    {
        		
        		 xuatMang(a,n);
			}
			case 2:
			{
				("tong chan: \n",tinhTongchan(a,n));
			}		
			case 3:
			{
				("so phan tu le: \n",demLe(a,n));
			}
			case 4:
			{
				maxAm(a,n);
				break;
			}	
			default:
                printf("Chuc nang vua chon khong co\n");
                break;
		}
		
	}while(chon!=0);
	
	return 0;
}
