#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
    int idade;

    cout << "Digite a idade do jogador: ";
    cin >> idade;

    if (idade >= 5 && idade <= 7) {
        cout << "Categoria: Jogos de Papel" << endl;
    } else if (idade >= 8 && idade <= 12) {
        cout << "Categoria: Jogos de Tabuleiro" << endl;
    } else if (idade >= 13 && idade <= 17) {
        cout << "Categoria: Jogos de Estratégia" << endl;
    } else if (idade >= 18 && idade <= 50) {
        cout << "Categoria: Jogos Online Esportivos" << endl;
    } else {
        cout << "Categoria: Jogos de Azar" << endl;
    }

    return 0;
}
