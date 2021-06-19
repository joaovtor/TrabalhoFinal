#ifndef sistema_H
#define sistema_h

#include<vector>
#include<iostream>
#include"pessoa.h"
#include"administrador.h"
#include"empregado.h"
#include"fornecedor.h"
#include"operario.h"
#include"vendedor.h"

using namespace std;


class Sistema
{
public:
	Sistema(); // construtor
	

	//funções pra adicionar instacias de classe nos vetores

	void addFornecedor(string n, string t, float vc, float vd);
	void addPessoa(string n, string e, string t);
	void addEmpregado(string n, string t, float sal, float imposto);
	void addADM(string n, string t, float sal, float imposto, float ajuda);
	void addOperario(string n, string t, float sal, float vp, float imposto, float comissao);
	void addVendedor(string n, string t, float sal, float vV, float imopsto, float comsisao);


	//funções pra mostrar as pessoas cadastradas
	void listaPessoas();
	void listaFornecedores();
	void listaEmpregados();

	//função pra alterar dados 
	void attDados();
	
private:
	//vetores

	vector<Pessoa> Pessoas;
	vector<Fornecedor> Fornecedores;
	vector<Empregado> Empregados;
	vector<ADM> ADMs;
	vector<Operario> Operarios;
	vector<Vendedor> Vendedores;
};



#endif // !sistema_H

