#include <iostream>

using namespace std;

int separar_numeros(string palavra){
    string numero = "";
    for(int i = 0; i < palavra.size();i++){
        switch(palavra[i]){
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            numero += palavra[i];
            break;
        }
    }
    return stoi(numero);
}

int main()
{

    string entrada;
    int numero;
    cin >> entrada;
    numero = separar_numeros(entrada);
    cout << numero << endl;

    return 0;
}
