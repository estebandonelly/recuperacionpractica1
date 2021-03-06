


//Diseñe una función que recibe 2 parametros de entrada, el primero un string que debe
//   imprimirse cierto número de veces. El número de veces va estar indicado por el segundo
//   parametro que debe ser de tipo int. La función debe contar con parametros por defecto,
//   es decir, debe imprimir alguna frase un cierto número fijo de veces a pesar de que no se le 
//   ingrese ningun parametro string ni ningun parametro int. Si la función recibe un número
//   negativo como parametro de entrada entonces se debe detener la ejecución del programa
//   con un mensaje de despedida.
#include <iostream>
using namespace std;


void display(string = "informatica2udea", int = 1);

int main()
{

    cout << "No se ha pasado ningún argumento por lo tanto entrega por defecto la frase:\n";
    display();
    
    cout << "\nPrimer argumento pasado:\n";
    display("juancamilocorrea");
    
    cout << "\nAmbos argumentos pasaron:\n";
    display("esteban", 33);
    return 0;
}

void display(string c, int n)
{
    for(int i = 1; i <= n; ++i)
    {
        cout <<c;
    }
    cout << endl;
}
