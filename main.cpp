#include <iostream>
#include <iomanip>
using namespace std;

int opcion, opc2, a = 0, maxi=0, n=0;//variables globales
float sub_total, total=0, suma=0;

int menu(void)//funcion para el menu
{

cout<<"\n\n**********************Consumo Durante el Mes*******";
cout<<"\n1. Crear inventario.";
cout<<"\n2. Ver inventario.";
cout<<"\n3. Salir.";
cout<<"\nIngrese su opcion: ";
return 0;
}

int main()//funcion principañ
{
  cout<<"\nDigite la cantidad de dispositivos que va ha ingresar " ;
  cin>>maxi;//de este dato dependera la cantidad de inpresiones en pantalla
  n=1+maxi;//de este dato dependera el tamaño de los arreglos
  cout<<"\nLa cantidad de dispositivos que va ha ingresar es " <<maxi ;
  string nombre_dispositivo[n] , tipo[n];
  float watt[n], cantidad[n], horas[n];//arreglos dependientes de "n" para cantidad solicitada por usuario
do{//ciclo do while
menu();//llama la funcion menu
cin>>opcion;//direcciona hacia el caso correspondiente
switch(opcion)//contiene las tres opciones posibles del menu
{
  //Crear inventario
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
  //Ver inventario
	case 2 :
		for (a=1; a<=maxi; a++)
		{
		    sub_total=watt[a]*cantidad[a]*horas[a];
		    suma+=sub_total;
		    total=suma*30;
			cout<<"\nNombre del dispositivo: "<<nombre_dispositivo[a]<<endl;
			cout<<"tipo de dispositivo: "<<tipo[a]<<endl;
			cout<<"Consumo Diario: "<<sub_total<<" Watts/hora"<<endl;
			cout<<"Consumo total por mes hasta este punto : "<<total<<" Watts/hora"<<endl;

		}

	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;
	break;
  //Salir
	case 3 :
	return 0;
  //por defecto propiedad del switch
	default: cout << "Ha elegido una opcion invalida.";
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;
}
}while(opc2 == 1);//Termina el ciclo
}