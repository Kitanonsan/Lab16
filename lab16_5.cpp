#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *m1,int *m2, int *m3, int *m4){
	int x[] = {*m1,*m2,*m3,*m4};
	int I1 = rand()%4;
	int I2;
	while (true){
		I2 = rand()%4;
		if(I2 != I1)
			break;	
	}
	int I3;
	while (true){
		I3 = rand()%4;
		if(I3 != I1 && I3 != I2 )
			break;	
	}
	int I4;
	while (true){
		I4 = rand()%4;
		if(I4 != I1 && I4 != I2 && I4 != I3 )
			break;	
	}

	*m1 = x[I1];
	*m2 = x[I2];
	*m3 = x[I3];
	*m4 = x[I4];
}