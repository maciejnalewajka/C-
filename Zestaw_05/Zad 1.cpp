#include <iostream>
#include <time.h>
#include <cstdlib>
#include <Windows.h>

using namespace std;

void bubble(int a[]){
	int n = 1000;
	int i,j,temp;
		
	for(i=1;i<n;++i){
		for(j=0;j<(n-i);++j){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void select(int a[]){
	int n = 1000;
	int i,j,temp;
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

void insert(int a[]){
	int n = 1000;
	int i,j,temp;
	
	for(i=1; i<n; i++){
		temp=a[i];
		j=i-1;
		while((temp<a[j]) && (j>=0)){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}

void printArray(int arr[]){
    int i;
    int size = 1000;
    for (i=0; i < size; i++){
    	printf("%d ", arr[i]);
	}
}

int main(){
	system("chcp 1250");
	system("cls");
	
	int tablica1[1000], tablica2[1000], tablica3[1000];
	clock_t start, stop;
	double czas1, czas2, czas3;
	
	start = clock();
    bubble(tablica1);
    stop = clock();
    czas1 = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << "Sortowanie B¹belkowe. Czas: " << czas1 << endl;
    
    start = clock();
    select(tablica2);
    stop = clock();
    czas2 = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << "Sortowanie Przez Selekcjê. Czas: " << czas2 << endl;
    
    start = clock();
    insert(tablica3);
    stop = clock();
    czas3 = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << "Sortowanie Przez Wstawianie. Czas: " << czas3 << endl;
 
    return 0;
}
