//3. Diseñe una función que reciba como parametro de entrada un string, dicha función debe detectar
//   si en el string de entrada hay números que sumen 10 y que esten entre los caracteres
//   en medio de dos caracteres ampersand (&). Ejemplo: "345ff6&dfg6pobn4&cun" -> este string cumple
//   la condición ya que 6 y 4 están entre los caracteres delimitados por los &'s y además suman 10.
//   La función debe retornar la cantidad de conjuntos de números que cumplen la condición en el string
//   de entrada, ejemplo: si el estring de entrada es Info2&901&yucasfritas&hy3jun7kpm&UdeA, la función
//   debería retornar un 2, ya que hay 2 conjuntos de números que cumplen la condición (9,0,1 y 3,7).


#include<iostream>

using namespace std;


int contador10(string st)
{
    int flag1 = 0;
    int flag2 = 0;
    int cont = 0;
    int res = 0;
    for(int i =0; i < st.length(); i++ ){
        if(st.at(i) == '&' && flag1 == 0){
            flag1 = 1;
        }

        if(flag1){

            char a = st.at(i);
            if(st.at(i) >= 48 && st.at(i) <= 57){

                int num = st.at(i)-48;
                cont += num;
            }
            else if(st.at(i) == '&'){

                if(cont == 10){
                    res += 1;
                }
                cont = 0;

            }
        }
    }
    return res;
}

int main()
{
        int a = contador10("&46&37&");
        cout<<"en este ejemplo hay la cantidad de: "<<endl;
        cout<<a<<endl;
        int b =contador10("345ff6&dfg6pobn4&cun");
        cout<<"en este ejemplo hay la cantidad de: "<<endl;
        cout<<b<<endl;
        int c =contador10("Info2&901&yucasfritas&hy3jun7kpm&UdeA");
        cout<<"en este ejemplo hay la cantidad de: "<<endl;
        cout<<c<<endl;

         return 0;
}
