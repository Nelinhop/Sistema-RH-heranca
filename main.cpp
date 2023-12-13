#include "funcionarios.hpp"
#include "cargos.hpp"

#include <iostream>
#include <vector>

using namespace std;

//cria funcionario / criar cargo / adicionar cargo ao funcionario / vetor de funcionarios / dps crirar gerentes de setor (alem das caracteristicas do funcionario tbm recebe
 // um setor para o qual é responsavel e string observacoes sobre o setor


vector<Funcionarios> funcicriados;
vector<Cargos> cargoscriados;

int main()
{

do{
        system("cls");
        cout << "---------------------------------------------------------------" << endl;
        cout << " - Criar cargo" << endl;
        cout << " - Mostrar cargos criados" << endl; // ao mostrar cargos dar opcao para mostrar mais informacoes de um cargo
        cout << " - Cadastro de funcionario"          << endl;
        cout << " - Atualizar registro de funcionario"<< endl;
        cout << " - Deletar registro de funcionario"  << endl;
        cout << " - Relatorio de funcionarios por cargo"        << endl;
        cout << " - Consultar relatorio por matricula de funcionario" << endl;
        cout << " - Relatorio de funcionarios com base no salario informado."      << endl;
        cout << " - Sair"                             << endl;
        cout << "---------------------------------------------------------------" << endl;


        int menu;
        cin >> menu;
        cout << endl;

        switch(menu){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:
                  cout<<"Insira o nome do funcionario "<< endl;
                cin >> ;
                cout<<"Insira o CPF do funcionario"<< endl;
                cin >> ;
                cout<<"Insira o numero para contato "<< endl;
                cin >> ;
                cout<<"Insira a data de nascimento"<< endl;
                cin >> ;

                cout << "Qual o ID do cargo deste funcionario" << endl;
                funcicriados.push_back(Funcionarios (cargoscriados.at());


                break;

            case 5:

                break;

            case 6:
                break;
            case 0:

                return 0;
                break;
        }

    }while(true);
}
