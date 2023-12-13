#include "funcionarios.hpp"


string Funcionarios::GetInformation()
{
    stringstream sst;

    if(m_customer == NULL)
    {
        sst << "Cliente nao informado";
    }
    else
    {
        sst << "Nome do cliente: " << m_customer->GetName() << " - " << "CPF: " << m_customer->GetCPF() << " - " << "Numero de telefone: " << m_cell;
    }

    return sst.str();
};

void Funcionarios::NOMEFUNCAO(ARGUMENTO){

};
