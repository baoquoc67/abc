#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,j;
	int c=0;
	for(i=200;i>=0;i--){
		for(j=0;j<=250;j++){
			if(5*i+4*j==1000){
				c=c+1;
				cout<<i<<" va "<<j<<endl;
			}
			
		}
	}
	cout<<"co "<<c<<" cap x,y";
	return 0;
}
