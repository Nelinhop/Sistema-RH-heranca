#ifndef CARGOS_HPP_INCLUDED
#define CARGOS_HPP_INCLUDED

#include "funcionarios.hpp"

class Cargos
{
private:

    string m_nome_cargo;
    string m_funcao;
    string m_data_admissao;
    string m_tipo_contrato_de_trabalho;
    string m_descricao_cargo_funcao;
    string m_local_trabalho;

public:
    Cargos() : m_customer(NULL), m_points(0),m_matricula(0) {};

    Cargos(Funcionarios* customer,int code=0, float points=0, float bought=0) : m_customer(customer), m_points(points), m_bought(bought), m_matricula(code) {};

    ~Cargos(){};

};



#endif // CARGOS_HPP_INCLUDED
