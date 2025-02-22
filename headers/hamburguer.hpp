#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Hamburguer: public Produto
{
    public:
        string _tipo;
        bool _artesanal;

        Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal);        
        virtual void print() override;   
        void setTipo(string tipo);
        void setArtesanal(bool artesanal);
};

#endif