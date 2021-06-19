#include"pessoa.h"
#include"administrador.h"
#include"empregado.h"
#include"fornecedor.h"
#include"operario.h"
#include"vendedor.h"
#include"Sistema.h"

int main() {

	Sistema Sistema;

	// variaveis que a gente usa 
	string n, t, e, nn;
	float valorc, valord, valora, valorp;
	

	int op = 0, opcao_pessoa = 0, opcao_relatorio = 0; //variaveis de opcao

	
	while (op != 4)
	{
		cout << "\n\nMENU\n1-Add Pessoa\n" <<
			"2-Alterar dados de usuario\n" <<
			"3-Registros\n" <<
			"4-Sair\nOpcao: ";
		cin >> op;

		//recebe a opcao do menu 
		switch (op)
		{
		case 1:

			cout << "\nVoce escolheu a opcao 1";
			cout << "\nQue tipo de pessoa deseja adicionar?: " <<
				"\n1-Pessoa;" <<
				"\n2-Fornecedor;" <<
				"\n3-Empregado;" <<
				"\n4-ADM;" <<
				"\n5-Operario;" <<
				"\n6-Vendedores;" << endl;

			cin >> opcao_pessoa;
			switch (opcao_pessoa)
				//vai criar uma instancia de classe no vetor
			{
			case 1:

				cout << "\nDigite o nome da pessoa: ";
				cin >> n;
				cout << "\nDigite o telelfone da pessoa: ";
				cin >> t;
				cout << "\nDigite o endereco da pessoa: ";
				cin >> e;
				Sistema.addPessoa(n, t, e);
				break;
			case 2:
				cout << "\nDigite o nome da pessoa: ";
				cin >> n;
				cout << "\nDigite o telelfone da pessoa: ";
				cin >> t;
				cout << "\nDigite o valor de credito da pessoa: ";
				cin >> valorc;
				cout << "\nDigite o valor de credito da pessoa: ";
				cin >> valord;
				Sistema.addFornecedor(n, t, valorc, valord);
				break;
			case 3:
				cout << "\nDigite o nome da pessoa: ";
				cin >> n;
				cout << "\nDigite o telelfone da pessoa: ";
				cin >> t;
				cout << "\nDigite o valor do salario da pessoa: ";
				cin >> valorc;
				cout << "\nDigite a porcentagem de imposto que sera retirado do salario da pessoa: ";
				cin >> valord;
				Sistema.addEmpregado(n, t, valorc, valord);
				break;
			case 4:
				cout << "\nDigite o nome da pessoa: ";
				cin >> n;
				cout << "\nDigite o telelfone da pessoa: ";
				cin >> t;
				cout << "\nDigite o valor do salario da pessoa: ";
				cin >> valorc;
				cout << "\nDigite a porcentagem de imposto que sera retirado do salario da pessoa: ";
				cin >> valord;
				cout << "\nDigite o valor da ajuda de custo: ";
				cin >> valora;
				Sistema.addADM(n, t, valorc, valord, valora);
				break;
			case 5:
				cout << "\nDigite o nome da pessoa: ";
				cin >> n;
				cout << "\nDigite o telelfone da pessoa: ";
				cin >> t;
				cout << "\nDigite o valor do salario da pessoa: ";
				cin >> valorc;
				cout << "\nDigite o valor de producao da pessoa: ";
				cin >> valord;
				cout << "\nDigite a porcentagem de imposto que sera retirado do salario da pessoa: ";
				cin >> valorp;
				cout << "\nDigite a porcentagem da comissao do valor de procusao da pessoa: ";
				cin >> valora;
				Sistema.addOperario(n, t, valorc, valord, valorp, valora);
				break;
			case 6:
				cout << "\nDigite o nome da pessoa: ";
				cin >> n;
				cout << "\nDigite o telelfone da pessoa: ";
				cin >> t;
				cout << "\nDigite o valor do salario da pessoa: ";
				cin >> valorc;
				cout << "\nDigite o valor de producao da pessoa: ";
				cin >> valord;
				cout << "\nDigite a porcentagem de imposto que sera retirado do salario da pessoa: ";
				cin >> valorp;
				cout << "\nDigite a porcentagem da comissao do valor de procusao da pessoa: ";
				cin >> valora;
				Sistema.addVendedor(n, t, valorc, valord, valorp, valora);
				break;
			default:
				cout << "\nOpcao Invalida";
				break;
			}
			break;
		case 2:
			Sistema.attDados();
			//atualizar o nome de uma das instancias, só o nome pq eu deu preguiça de fazer
			//pra todas os atributos de cada classe, eu sei fazer mas deu preguiça
			break;
		case 3:
			//relatorios
			cout << "Que tipo de registro deseja acessar?\n1-Todas as pessoas registradas\n2-Todos os fornecedores\n3-Todos os empregados" << endl;
			cin >> opcao_relatorio;
			switch (opcao_relatorio) {
			case 1:
				Sistema.listaPessoas();
				break;
			case 2:
				Sistema.listaFornecedores();
				break;
			case 3:
				Sistema.listaEmpregados();
				break;
			default:
				cout << "Opcao invalida";

				break;
			}
			break;
		case 4:
			cout << "Fechando Menu";
			break;
		default:
			cout << "Opcao invalida";
			break;

		}
	}

}
