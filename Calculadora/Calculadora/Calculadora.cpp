// Calculadora.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    char op;
        cout << "Digite o primeiro numero" << endl;
        cin >> num1;
        cout << "Digite o segundo numero" << endl;
        cin >> num2;
        cout << "Digite a operacao" << endl;
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "A soma "; cout << num1 + num2 << endl;
            break;

        case '-':
            cout << "A subtracao ";cout << num1 - num2 << endl;
            break;
        case '*':
            cout << "A multiplicacao";cout << num1 * num2 << endl;
            break;
        case '/':
            cout << "A divisao";cout << num1 / num2 << endl;

        default:
            cout << "Numero nao reconhecido" << endl;
            break;
        }
    system("pause");
    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
