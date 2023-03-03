#include <iostream>
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));
    string lista_palavras[4] = {"melancia","abacate","uva","banana"};
    int idx = rand() % 4;

    string segredo = lista_palavras[idx];
    string chutes = "";
    string letra = "";
    bool ganhou = false;
    int max_tentativas = 2 * segredo.size();
    int tentativas = 0;
    int acertos = 0;

    while(tentativas < max_tentativas){
        system("clear");
        acertos = 0;
        for(int i = 0; i < segredo.size(); i++){
            if(chutes.find(segredo[i]) != -1){
                cout << segredo[i] << " ";
                acertos++;
            }else{
                cout << "_ ";
            }
        }

        cout << endl;

        if(acertos==segredo.size()){
            ganhou = true;
            break;
        }


        cout << "Você tem ";
        cout << max_tentativas - tentativas;
        cout << " tentativas\n";
        cout << "Chutes anteriores: " << chutes << endl;
        cout << "Acertos: " << acertos << endl;
        cout << "Chute uma letra: ";
        cin >> letra;
        chutes += letra;
        tentativas++;
    }
    system("clear");
    if(ganhou){
        cout << "Você ganhou!!!\n";
    }else{
        cout << "Você perdeu!"<<endl;
        cout << "A palavra secreta era: " << segredo << endl;
    }
    cout << "O jogo acabou!\n";
    return 0;
}
