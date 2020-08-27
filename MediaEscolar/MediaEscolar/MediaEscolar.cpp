// MediaEscolar.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
int main()
{
    string espaco = " ";
    double notafinal=0;
    int test = 0;
    int  notas[6] = {test};
    for (int i = 1;i < 6;i++) {
        cout << "Na sua prova" +espaco<< i<< espaco+"voce tirou quanto?"<<endl;
        cin >> notas[i];
    }
    
    for (int i2 = 0;i2 <6;i2++) {
        notafinal = notafinal + notas[i2];
   }
    cout << "Sua nota final"+espaco<< notafinal/5;
}
