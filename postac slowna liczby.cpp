#include <stdio.h>
#include <stdlib.h>


void wypisz(int liczba)
{
	if (liczba>99)
	{
	int temp1;
	temp1=liczba%100;
	temp1=(liczba-temp1)/100;
	switch (temp1)
		{
		case 1:{printf("sto ");break;}
		case 2:{printf("dwieœcie ");break;}
		case 3:{printf("trzysta ");break;}
		case 4:{printf("czterysta ");break;}
		case 5:{printf("piecset ");break;}
		case 6:{printf("szescset ");break;}
		case 7:{printf("siedemset ");break;}
		case 8:{printf("osiemset ");break;}
		case 9:{printf("dziewiecset ");break;}
		}	
	liczba=liczba-(temp1*100);
	}
	
	if (liczba<100)
	{
	int temp2;
	temp2=liczba%10;
	temp2=(liczba-temp2)/10;
	switch (temp2)
		{
		case 1:{printf("dziesiec ");break;}
		case 2:{printf("dwadziescia ");break;}
		case 3:{printf("trzydziesci ");break;}
		case 4:{printf("czterdziesci ");break;}
		case 5:{printf("piecdziesiat ");break;}
		case 6:{printf("szescdziesiat ");break;}
		case 7:{printf("siedemdziesiat ");break;}
		case 8:{printf("osiemdziesiat ");break;}
		case 9:{printf("dziewiecdziesiat ");break;}
		}
	liczba=liczba-(temp2*10);
	}
	
	if(liczba<10)
	{
		switch (liczba)
		{
		case 1:{printf("jeden ");break;}
		case 2:{printf("dwa ");break;}
		case 3:{printf("trzy ");break;}
		case 4:{printf("cztery ");break;}
		case 5:{printf("piec ");break;}
		case 6:{printf("szesc ");break;}
		case 7:{printf("siedem ");break;}
		case 8:{printf("osiem ");break;}
		case 9:{printf("dziewiec ");break;}
		}
	}	
}


int reszta(int liczba)
{
	int r=liczba%1000;
	return r; 
}


int tysiace(int liczba)
{
	int r;
	r=reszta(liczba);
	liczba=liczba-r;
	return liczba/1000;
}

int main()
{
	int x=123456;
	int a,b;
	a=reszta(x);
	b=tysiace(x);
	wypisz(b);
	printf("tysiecy ");
	wypisz(a);
}
