#include <iostream>
#include <stdlib.h>

using namespace std;

fun(){
	int k = rand()%16;
	int c = 0;
	int p = 0;
	if(k>2){
		for(int i = 1;i<k+1;i++){
			cout << i << " ";
			}
			
		p=k+1;
		while(c<k-1){
			cout << "\n";
			p=p+k;
			for(int i=1;i<k+1;i++){
				cout << p-i << " ";
			}
			
			cout << "\n";
			
			for(int i=0;i<k;i++){
				cout << p+i << " ";
			}
			p=p+k;
			c+=2;
		}
	}
}

main(){
	system("chcp 1250");
	system("CLS");
	
	fun();
	
}
