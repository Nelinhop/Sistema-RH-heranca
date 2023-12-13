#ifndef FUNCIONARIOS_HPP_INCLUDED
#define FUNCIONARIOS_HPP_INCLUDED

#include <iostream>
#include "cargos.hpp"

using namespace std;

class Funcionarios
{
protected:
    Cargos *m_cargo;
    string m_name;
    string m_cpf;
    string m_cell;
    int m_day;
    int m_month;
    int m_year;
    char m_sexo;
    int m_matricula;
    string m_grau_instrucao;
     float m_salario;
    string m_nacionalidade;

public:
    Funcionarios() : m_name(""), m_cpf(""),m_cell(""),m_day(0),m_month(0),m_year(0) {};

    Funcionarios(string nome=" ", string CPF=" ",string cell=" ") : m_name(nome), m_cpf(CPF), m_cell(cell){};

    string GetName() { return m_name; };
    string GetCPF() { return m_cpf; };
    string GetCell(){ return m_cell; };
    string GetInformation();


};


#endif // FUNCIONARIOS_HPP_INCLUDED
