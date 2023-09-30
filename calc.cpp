#include <iostream>
using namespace std;

int main() {

    while (true)
    {
        int resp;
        int anoNasc;
        int mesNasc;
        int diaNasc;

        cout << "=====================" << endl;
        cout << "=====CALCULADORA=====" << endl;
        cout << "=====================" << endl;
        cout << "Funções:" << endl;
        cout << "[1] Calcular idade" << endl;
        cout << "[2] Conversor de medidas de tempo" << endl;
        cout << "[3] Conversor de medidas de temperatura" << endl;
        cout << "Escolha uma opção (1, 2, 3): \n";
        cout << "> ";

        cin >> resp;

        switch (resp) // Considera o input do usuario
        {
        case 1: // Calcular Idade
            cout << "Opção 1 selecionada" << endl;
            cout << "Digite o dia de seu nascimento: " << endl;
            cin >> diaNasc;

            if (diaNasc < 32 && diaNasc > 0) { // Filtro de Input
                cout << "Digite o mes de seu nascimento: " << endl;
                cin >> mesNasc;

                if (mesNasc < 13 && mesNasc > 0) { // Filtro de Input
                    cout << "Digite o ano de seu nascimento: " << endl;
                    cin >> anoNasc;

                    if (anoNasc > 0 && anoNasc < 2023) { 
                        // Declarando variaveis para o sumario
                        int aIdade = 2023 - anoNasc;
                        int mIdade = aIdade * 12;
                        int weekIdade = mIdade * 4;
                        int dIdade = mIdade * 30;
                        int hourIdade = dIdade * 24;
                        int minIdade = hourIdade * 60;
                        int secIdade = mIdade * 60;

                        cout << "==========Sumário==========" << endl;
                        cout << "Anos de idade: " << aIdade << endl;
                        cout << "Meses: " << mIdade << endl;
                        cout << "Dias: " << dIdade << endl;
                        cout << "Semanas: " << weekIdade << endl;
                        cout << "Horas: " << hourIdade << endl;
                        cout << "Minutos/Segundos: " << minIdade << "m" << secIdade << "s\n";
                        cout << "\n";
                        cout << "\n";
                    }
                
                }
            }
            else {
                cout << "Erro, dado inválido" << endl;
            }

            break;
               

        case 2:
            cout << "Opção 2 selecionada" << endl;
            break;

        case 3:
            cout << "Opção 3 selecionada" << endl;
            break;

        default:
            cout << "Opção inválida, tente novamente." << endl;
            break;        
        }
    }
    }

    