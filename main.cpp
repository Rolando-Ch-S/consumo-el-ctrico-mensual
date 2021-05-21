#include <iostream>
#include <iomanip>


using namespace std;

int menu(void)
{
	
cout<<"\n**********************consumo durante el mes*******";
cout<<"\n1. Crear inventario.";
cout<<"\n2. Ver inventario.";
cout<<"\n3. Salir.";
cout<<"\nIngrese su opcion: ";
return 0;
}

int main()
{

int opcion, opc2, a = 0, max=5;
float sub_total, total;

string nombre_dispositivo[50], tipo[50];
float watt[50], cantidad[50], horas[50];

do{
menu(); 
cin>>opcion;

switch(opcion) 
{
	case 1 :
	a++;	
	cout<<"\nIngrese el nombre del dispositivo: "; 
	cin>>nombre_dispositivo[a];	
	cout<<setprecision(0)<<fixed<<"Ingrese el tipo de dispositivo: ";
	cin>>tipo[a];	
  cout<<setprecision(0)<<fixed<<"Ingrese la cantidad de dispositivos: ";
	cin>>cantidad[a];	
	cout<<setprecision(0)<<fixed<<"Ingrese el consumo del dispositivo: "; 
	cin>>watt[a];
   cout<<setprecision(0)<<fixed<<"Ingrese la cantidad de horas de uso: ";
	cin>>horas[a];
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;
	break;
	
	case 2 :
		for (a=1; a<max; a++)
		{
			cout<<"\nNombre del dispositivo: "<<nombre_dispositivo[a]<<endl;
			cout<<"tipo de dispositivo: "<<tipo[a]<<endl;	
			cout<<"Consumo: "<<watt[a]<<endl;

		}
	
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;	
	break;

	case 3 :
	return 0;
	
	default: cout << "Ha elegido una opcion invalida.";
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;
} 
}while(opc2 == 1);

}