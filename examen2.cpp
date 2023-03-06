#include <iostream>

using namespace std;

int Push(int[], int);
int Pop(int[], int);
void Impresion(int[], int);

int cpo=0, cpu=0;
int main()
{
	int pila[8], opc, cima = -1;
	while (1)
	{
		cout << " MENU" << endl;

		cout << "1. Push (Entrada)" << endl;
		cout << "2. Pop  (Salida)" << endl;
		cout << "3. Impresion" << endl;
		cout << "\nSeleccione una opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:
			cima = Push(pila, cima);
			break;
		case 2:
			cima = Pop(pila, cima);
			break;
		case 3:
			Impresion(pila, cima);
			break;
		}
	}

	return 0;
}
int Push(int x[8], int y)
{
//	int cpu=0;
	if (y < 7)
	{
		cout << "\nIngrese un dato: ";
		cin >> x[y + 1];
		y = y + 1;
	}
	else
	{
		cout << "Pila llena." << endl;
	}
	cpu++;
	return y;
}
int Pop(int x[8], int y)
{
//	int cpo=0;
	if (y < 0)
	{
		cout << "Lo sentimos, la pila carece de valores. Por favor, intente otra opcion " << endl;
	}
	else
	{
		cout << "\nSalida: " << x[y] <<"\n\n";
		y = y - 1;
	}
	cpo++;
	return y;
}
void Impresion(int x[8], int y)
{
	int i;
	if (y < 0)
	{
		cout << "\nError, meter un valor" << endl;
	}
	else
	{
		cout <<"\n\n**Impresión**"<<endl;
		for (i = y; i >= 0; i--)
		{
			cout << "Dato: " << x[i] << endl;
		}
		cout<<"\nSe ha usado la funcion Push: "<<cpu<<" veces";
		cout<<"\nSe ha usado la funcion Pop: "<<cpo<<" veces\n\n";
	}
}
