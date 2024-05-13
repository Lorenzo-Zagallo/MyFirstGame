#include <iostream>
#include <ctime> // usa a hora atual como semente para o gerador aleatório

using namespace std;

void get()
{
    cin.get();
}

int main()
{
    // ======== EXEMPLO ========= //
    srand(time(nullptr)); // funcao principal para numero aleatorio
    // std::time como parâmetro e semeia o gerador de número pseudo-aleatório usado por std::rand() que por sua vez retorna um valor integral pseudo-aleatório entre 0 e RAND_MAX

    int numero_aleatorio = rand();
    int numero_ate_60 = rand() % 60;

    cout << "O numero maximo e: " << RAND_MAX << '\n';
    cout << "Numero aleatorio ate RAND_MAX: " << numero_aleatorio << '\n';
    cout << "Numero aleatorio ate 60: " << numero_ate_60 << '\n';
    // ========================= //


    //int chances = 5;
    int tentativa;
    int num = rand() % 100;

    cout << "\nAdivinhe o numero correto ate 100 e ganhe da maquina(10 tentativas):\n" << endl;

    cout << "Digite o numero: " << endl;
    cin >> tentativa;

    while (num != tentativa)
    {
        if (num > tentativa)
        {
            cout << "Maior..." << endl;
        }
        else if (num < tentativa)
        {
            cout << "Menor..." << endl;
        }
        cin >> tentativa;
    }

    if (tentativa == num)
    {
        cout << "Numero correto!" << endl;
    }

    cout << "Parabens, voce ganhou da maquina!" << endl;
    get();

    return 0;
}