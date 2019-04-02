/ Practica de recuperación */
// Esta practica es válida como recuperación de la práctica 1 del semestre 2018_2 */
// Si usted decide realizar esta práctica entoces su nota final en la práctica 1
//será la que obtenga en esta misma práctica de recuperación */

//Ejercicios:





// Diseñe un función llamada "Mayusculas" que recibe como parametro de entrada un
// string y a su vez tiene como valor de retorno un string. La función debe convertir
//todos los caracteres del string de entrada a mayusculas y debe retornar el string
//resultante.


#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void Mayuscula (string &pal){

    for (int i=0; i<pal.length(); i++){
        pal[i] = towupper(pal[i]);
    }
}

int main(){

    string palabra;
    cout<<"Digite una palabra: "<<endl;
    cin>>palabra;





    Mayuscula(palabra);
    cout<<"su palabra en mayuscula es: "<<endl;

    cout<<endl;

    cout<<(palabra)<<endl;

return 0;
}
