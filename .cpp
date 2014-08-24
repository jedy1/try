#include "stdafx.h"
#include "windows.h"
int *s;
char *a;
void resolve(char pal[30])
{
	int d = 0;  char t; 
	for (int x = 0; x < 30; x++)
	{
		if ((pal[x] == 'a') || (pal[x] == 'e') || (pal[x] == 'i') || (pal[x] == 'o') || (pal[x] == 'u'))
		{
			if (d == 9){ d = 0; }d++; s = &d;
			printf("%d",*s);
		}
		else 
		{
			t = pal[x];
			a = &t;
			printf("%c",*a);
		}
	}
	
}
int factorial(int r)
{
	int e = r;
	for (int x = 1; x < e; x++)
	{
		r=r*x;
	}
	return r;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int op;
	do{
		printf("MENU\n\n1.Convertir\n2.Factorial\n3.Salir\n\nEscoge una opcion\n");
		scanf_s("%d", &op);
		switch (op)
		{
		case 1:
			printf("Ingresa una palabra\n"); char pal[30]; scanf_s("%s", &pal); resolve(pal); Sleep(2500); system("cls"); break;
		case 2:
			printf("Ingresa un numero\n"); int r,w; scanf_s("%d", &r);
			w = factorial(r);printf("El factorial es: %d",w); Sleep(2500); system("cls"); break;
		}
	}
	while (op != 3);
	system("pause");
	return 0;
}

