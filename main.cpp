#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int escolha;
    int i = 0;

    while(i == 0){
        cout << "\n    Jokenpô    \n" << endl;
        cout << "Pedra(1)" << endl;
        cout << "Papel(2)" << endl;
        cout << "Tesoura(3)" << endl;
        cout << "Sair(4)" << endl;   
        cout << "Digite sua escolha: "; cin >> escolha;
        int computador;
        srand(time(0));
        computador = rand() % 3 + 1;

        if(computador == 1){
            cout << "O computador escolheu PEDRA";
        }
        else if(computador == 2){
            cout << "O computador escolheu PAPEL";
        }
        else{
            cout << "O computador escolheu TESOURA";
        }
        

        if(escolha < 1 || escolha > 4){
            cout << "Digite uma opção válida.";
            cout << "Digite sua escolha: "; cin >> escolha;
        }
        else if(escolha == 4){
            exit(0);
        }
        else if(escolha == computador){
            cout << "Empate";
        }
        else if((escolha == 1 && computador == 3) || (escolha == 3 && computador == 2) || (escolha == 2 && computador == 1)){
            cout << "Vitória do jogador!";
        }
        else{
            cout << "Vitória do computador!";
        }
        


    }

}