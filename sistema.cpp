#include"Sistema.h"

Sistema::Sistema()
{
}

			//Funções de vetor, já vimos isso em outros dois trabalhos, coisa basica
void Sistema::addFornecedor(string n, string t, float vc, float vd)
{
	Fornecedores.push_back(Fornecedor(n, t, vc, vd));
}

void Sistema::addPessoa(string n, string e, string t)
{
	Pessoas.push_back(Pessoa(n, e, t));
}

void Sistema::addEmpregado(string n, string t, float sal, float imposto)
{
	Empregados.push_back(Empregado(n, t, sal, imposto));
}

void Sistema::addADM(string n, string t, float sal, float imposto, float ajuda)
{
	ADMs.push_back(ADM(n, t, sal, imposto, ajuda));
}

void Sistema::addOperario(string n, string t, float sal, float vp, float imposto, float comissao)
{
	Operarios.push_back(Operario(n, t, sal, vp, imposto, comissao));
}

void Sistema::addVendedor(string n, string t, float sal, float vV, float imopsto, float comsisao)
{
	Vendedores.push_back(Vendedor(n, t, sal, vV, imopsto, comsisao));
}


				//Funções pra imprimir todos os dados
void Sistema::listaPessoas()

{
	cout << "\nLista de pessoas: ";
	for (int i = 0; i < Pessoas.size(); i++)
	{
		Pessoas[i].dados();
		
	}
	listaFornecedores();
	listaEmpregados();
}

void Sistema::listaFornecedores()
{
	cout << "\nLista de Fornecedores: ";
	for (int i = 0; i < Fornecedores.size(); i++)
	{
		Fornecedores[i].dados();

	}
}

void Sistema::listaEmpregados()
{
	cout << "\nLista de Empregados: ";
	for (int i = 0; i < Empregados.size(); i++)
	{
		Empregados[i].dados();

	}
	cout << "\nLista de ADMs: ";
	for (int i = 0; i < ADMs.size(); i++)
	{
		ADMs[i].dados();
	}
	cout << "\nLista de Operarios: ";
	for (int i = 0; i < Operarios.size(); i++)
	{
		Operarios[i].dados();

	}
	cout << "\nLista de Vendedores: ";
	for (int i = 0; i < Vendedores.size(); i++)
	{
		Vendedores[i].dados();

	}
}



			//Função pra atualizar info, recebe um nome, procura em todos os vetores, se encontrar, troca pelo novo nome
void Sistema::attDados()
{
	string n, nn;

	cout << "\nDigite o nome da pessoa que procura: ";
	cin >> n;
	cout << "\nDigite o novo  nome: ";
	cin >> nn;
	

	for (int i = 0; i < Pessoas.size(); i++)
	{
		if (Pessoas[i].getNome() == n) {
			Pessoas[i].setNome(nn);
		}
	}
	for (int i = 0; i < Fornecedores.size(); i++)
	{
		if (Fornecedores[i].getNome() == n) {
			Fornecedores[i].setNome(nn);
		}
	}
	for (int i = 0; i < Empregados.size(); i++)
	{
		if (Empregados[i].getNome() == n) {
			Empregados[i].setNome(nn);
		}
	}
	for (int i = 0; i < ADMs.size(); i++)
	{
		if (ADMs[i].getNome() == n) {
			ADMs[i].setNome(nn);
		}
	}
	for (int i = 0; i < Operarios.size(); i++)
	{
		if (Operarios[i].getNome() == n) {
			Operarios[i].setNome(nn);
		}
	}
	for (int i = 0; i < Vendedores.size(); i++)
	{
		if (Vendedores[i].getNome() == n) {
			Vendedores[i].setNome(nn);
		}
	}
}
