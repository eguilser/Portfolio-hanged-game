/***************************************************************************/
/* Programa del juego del ahorcado                                         */
/* Autor: Sergio Eguíluz Romero                                            */
/* Proposito: Dominar el temario dado a lo largo del curso                 */
/***************************************************************************/
#include <iostream>
#include <string>
using namespace std;
string palabra_inicial;
string palabra_mostrada;
int vidas;
void mostrar();
void ingresar(char a);
void inicializar();
void leerfichero();

int main(){
	inicializar();
	mostrar();
	while (vidas > 0 && palabra_mostrada != palabra_inicial){
		char a;
		cin >> a;
		ingresar (a);
		mostrar();
		
	}
	if (vidas > 0)
	cout << "�GANASTE!"<<endl;
	else 
	cout << "PERDISTE, la palabra era: "<< palabra_inicial <<endl;
	return 0;
}
void mostrar(){
	cout << "Vidas: "<< vidas<<endl;
	cout << palabra_mostrada<<endl;
	
}
void inicializar(){
	vidas = 5;
	string palabra_inicial = "Altavoz";
	
	for(int i = 0; i < &palabra_inicial.length; i++){
		if(palabra_inicial[i]>= 'a' && palabra_inicial[i] <= 'z'){
			palabra_mostrada += '_';
		}else 
		palabra_mostrada += palabra_inicial[i];	
	}
}
void ingresar(char a){
	bool perdividas = true;
	for(int i = 0; i < palabra_inicial.length; i++){
		if(a==palabra_inicial[i]){
			perdividas = false;
			palabra_mostrada[i] = a;
		}
	}
}
void leerfichero(){
ifstream f2;
f2.open("datos.txt");
if (!f2) cout << "Error";
else {
char dato;
dato = f.get();
while(!f.eof()) {
cout << dato << endl;
dato = f.get();
}
}
f2.close();
}

























