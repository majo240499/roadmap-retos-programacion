//ejercicio 2
//operadores aritméticos
#include <iostream>
using namespace std;

int main(){
  int num = 3;
int suma = num + 4;
int mult = num * 4;
double div = num / 4;
int rest = num - 4;
int mod = num % 4;

cout<<"La suma es: "<<suma<<endl;
cout<<"La multiplicacion es: "<<mult<<endl;
cout<<"La división es: "<<div<<endl;
cout<<"La resta es: "<<rest<<endl;
cout<<"El modulo es: "<<mod<<endl;

//Operadores lògicos
/*Los operadores lógicos son: && and, || or, y ! not*/
bool v = true;
bool f = false;
cout<< "v && f: "<< (v && f) << endl;
cout<<" v || f: "<< (v || f) << endl;
cout << "!v " << !v << endl;
/*Los operadores de comparación son:
== igualdad
!= desigualdad
> Mayor que
< menor que
>= mayor o igual que
> menor o igual que */
int a = 3;
int b = 6;
cout << " a == b" << (a == b) << endl;
cout << "a != b" << (a != b) << endl;
cout << " a > b" << ( a > b) << endl;
cout << " a < b" << ( a < b) << endl;
cout << " a >= b" << ( a >= b) << endl;
cout << " a <= b" << ( a <= b) << endl;

/*Los operadores de asignación son =, ++ incremento, --descremento, += suma y asignación, 
-= resta y asignación, *= multiplicación y asignación, /= división y asignación,
%= módulo y asignación*/
int x = 4;

cout << "Suma y asignación: " << ( x += 3) << endl;
cout << "Resta y asignación: " << ( x -= 3) << endl;
cout << "Multiplicación y asignación: " << ( x *= 3) << endl;
cout << "División y asignación: " << ( x /= 3) << endl;
cout << "Módulo y asignación: " << ( x %= 3) << endl;

//Estructuras de control
// if - else
cout << "Ingresa un número: ";
cin >> num;
if ( num == 3){
cout << "El numero es correcto";
} else {
cout << "El número es incorrecto";

//switch
char caracter;
	cout<<"Introduce un caracter:";
	cin>>caracter;
	switch (car){
		case 'a': cout<<"Es una vocal minúscula";break;
		case 'e': cout<<"Es una vocal minúscula";break;
		case 'i': cout<<"Es una vocal minúscula";break;
		case 'o': cout<<"Es una vocal minúscula";break;
		case 'u': cout<<"Es una vocal minúscula";break;
		default: cout<<"No es una vocal minúscula";break;
	}
//for
int n,i;
cout<<"Ingrese la cantidad de datos: ";
cin>> n;
	for (int i = 1; i <= n; i++){ 
	cout<<i<<" "<<endl;
  }

//Do-while
int i = 1;
	
	do {
		cout << "i ahora es: " << i << endl;
		i = i + 1;
	}while (i <= 8);
//while
int numero;
	int suma = 0;
	cout << "Ingresa un numero: ";
	cin>> numero;
	
	while(numero >= 0){
		suma += numero;
		cout << "Ingresa mas numeros: ";
		cin>>numero;
	}	
	cout <<"La suma es: "<<suma;
	return 0;
/* Crea un programa que imprima por consola todos los números comprendidos entre 10 y 55
  (incluidos), pares y que no son ni el 16 ni múltiplos de 3*/
for (int i = 10; i<=55 ; i++){
		if(i == 16 || i % 3 == 0 || i%2 ){
			continue;
		}
		cout<<i<<endl;
	}
}
