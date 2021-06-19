#include"pessoa.h"

Pessoa::Pessoa() {

}

Pessoa::Pessoa(string nome, string endereco, string telefone)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
}

string Pessoa::getNome()
{
	return nome;
}

string Pessoa::getEndereco()
{
	return endereco;
}

string Pessoa::getTelefone()
{
	return telefone;
}

void Pessoa::setNome(string n)
{
	nome = n;
}

void Pessoa::setEndereco(string e)
{
	endereco = e;
}

void Pessoa::setTelefone(string t)
{
	telefone = t;
}


void Pessoa::dados()
{
	cout << "\nNome: " << nome << "\nTelefone: " << telefone<<"\nEndereco: "<<endereco<<endl;
}

 /*getters setters e impressao de informação, nada demais*/