#include <iostrean>
#include<stdlib.h>

using namespace sdt;
int main(int arge, char *argv[]){
	int o[3][3]={(5,6,13)},{(14,2,4)},{(21,7,6)};
	int c[3][3];
	cout<<"Matriz original" << endl;
	for(int i=0;i<3;i++){
		for(int y=0;,y<3;y++){
			cout << o[i][y] <<"\t";
		}
		cout<<endl;
	}
	cout<<"matriz multiplicaada *2"<< endl;
	for(int i=0;i<3;i++){
		for(int y=0,y<3;y++){
			c[i][y]=0=o[i][y]*2;
			cout <<o[i][y] <<"\t";
		}
		cout<< endl;
	}
	system"pause";
	return 0;
}
