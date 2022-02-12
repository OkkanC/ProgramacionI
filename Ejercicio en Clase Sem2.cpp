#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
setlocale(LC_ALL, "spanish"); //para poner acentuaciones 
	
	float num1, num2, resul;
	int ola;
	
	cout<<"Hola, revisa la sig. tabla y luego ingresa el número de la operación que desees realizar"<<endl;
	cout<<"1. Suma"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicación"<<endl;
	cout<<"4. División"<<endl<<endl;
	cin>>ola;
	
	switch (ola){
		case 1:
			cout<<"Ingresa el Primer Número: ";cin>>num1;
			cout<<"Ingresa el Segundo Número: ";cin>>num2;
			resul = (num1+num2);
		system("cls");
			cout<<"Tu suma es: "<<resul;
			break;
			
		case 2:
			cout<<"Ingresa el Primer Número: ";cin>>num1;
			cout<<"Ingresa el Segundo Número: ";cin>>num2;
			resul = (num1-num2);
			system("cls");
			cout<<"Tu resta es: "<<resul;
			break;
			
		case 3:
		cout<<"Ingresa el Primer Número: ";cin>>num1;
		cout<<"Ingresa el Segundo Número: ";cin>>num2;
		resul = (num1*num2);
		system("cls");
		cout<<"Tu multiplicación es: "<<resul;
		break;
		
		case 4:
			cout<<"Ingresa el Primer Número: ";cin>>num1;
			cout<<"Ingresa el Segundo Número: ";cin>>num2;
			resul = (num1/num2);
			system("cls");
			cout<<"Tu división es: "<<resul;
			break;
			
		default:
			cout<<"\nNo ingresaste una opción válida";
	}
	
	return 0;
}
