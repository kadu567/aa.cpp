#include <iostream>

using namespace std;

void opcaoUm() {
    cout<< "Voce escolheu a opcao 1." << endl;
}
void opcaoDois() {
    cout << "Voce escolheu a opcao 2." << endl;
}
void opcaoTres() { 
cout << "Voce escolheu a opcao 3" << endl;
}

int main(){
    int escolha;
    do{
        cout << "=== Menu ===" << endl;
        cout << "1. Opcao 1" << endl;
        cout << "2. Opcao 2" << endl;
        cout << "3. Opcao 3" << endl;
        cout << "4. sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;
        
        // swtich case para as opcoes do menu

        swtich(escolha) {
            case1;
            break;
            opcaoUm();
            case2;
            break;
            opcaoDois();
            case3;
            break;
            opcaoTres();
            case4;
            cout << "Programa encerrado. Tente Novamente." << endl;
            break;
        }
    }while (escolha != 4);
    return 0;
        }    
  



