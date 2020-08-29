// CondicaoTernaria.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Bem vindo.Digite um numero correspondente a um mes do ano" << endl;
    cin >> num;

    string mes = (num == 1) ? "Janeiro" :
        (num == 2) ? "Fevereiro" :
        (num == 3) ? "Março" :
        (num == 4) ? "Abril" :
        (num == 5) ? "Maio" :
        (num == 6) ? "Junho" :
        (num == 7) ? "Julho" :
        (num == 8) ? "Agosto" :
        (num == 9) ? "Setembro" :
        (num == 10) ? "Outubro" :
        (num == 11) ? "Novembro" :
        (num == 12) ? "Dezembro" :
        "Valor digitado nao e correspondente a um mes do ano";

    cout << mes << endl;

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
