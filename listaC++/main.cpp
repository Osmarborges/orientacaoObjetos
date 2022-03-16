#include <iostream>
#include "lista.h"

class Lista
{
    NO *primeiro;
    NO *ultimo;
    int qdte;

public:
    bool listaVazia()
    {
        return qdte == 0 ? true : false;
    }
    Lista()
    {
        primeiro = NULL;
        ultimo = NULL;
        qdte = 0;
    }
    Lista(int dado)
    {
        primeiro = new NO(dado);
        primeiro = ultimo;
    }
    ~Lista()
    {
        qdte = 0;
        delete primeiro;
    }
    bool inserirInicio(int dado)
    {
        NO *no = new NO(dado);
        if (listaVazia())
        {
            primeiro = no;
            ultimo = no;
        }

        return true;
    }

    bool consultar(int elemento)
    {
        NO *buscado = primeiro;
        while (buscado)
        {
            if (buscado->dado == elemento)
                return true;
            buscado = buscado->prox;
        }

        return 0;
    }

    void destruir() {}
};

int main()
{
    Lista lista1;

    // lista1.criar();

    if (lista1.inserirInicio(123, 0))
        std::cout << "Deu tudo certo" << std::endl;

    if (lista1.consultar(0) == 123)
        std::cout << "Realmente deu tudo certo" << std::endl;
    else
        std::cout << "O cara me enganou!" << std::endl;

    lista1.destruir();
}
