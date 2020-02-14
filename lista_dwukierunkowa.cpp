#include <stdio.h>
#include <stdlib.h>

struct element
{
	struct element *nastepny;
	struct element *poprzedni;
	int wartosc;
};


void dodaj(struct element *wsk1,int liczba)
{
	while((*wsk1).nastepny != NULL) //szukamy ostatniego elementu
	{
		wsk1=(*wsk1).nastepny;
	}

	struct element *element2; //to bedzie nasz kolejny wezel
	element2=(struct element *) malloc (sizeof(struct element)); //rezerwujemy pamiec
	(*element2).wartosc=liczba;
	(*element2).nastepny=NULL;
	(*element2).poprzedni=wsk1;
	(*wsk1).nastepny=element2; //dowiazujemy nowy ostatni element
}

void wypisz(struct element *wsk1)
{
	while((*wsk1).nastepny!=NULL)
	{
		printf("%d\n",(*wsk1).wartosc);
		wsk1=(*wsk1).nastepny;
	}
	printf("%d\n",(*wsk1).wartosc);
}

int main()
{
	struct element lista1={NULL,NULL,1};
	dodaj(&lista1,2);
	dodaj(&lista1,3);
	wypisz(&lista1);
	return 0;
}
