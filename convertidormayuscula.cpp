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
