#ifndef pessoa_h
#define pessoa_h

#include<iostream>
using namespace std;


class Pessoa
{
public:
	//construtores
	Pessoa();
	Pessoa(string nome, string endereco, string telefone);

	//getters
	string getNome();
	string getEndereco();
	string getTelefone();

	//setters virtuais pra não precisar reescrever eles nas classes herdeiras
	virtual void setNome(string n);
	virtual void setEndereco(string e);
	virtual void setTelefone(string t);

	//função pra imprimir os atributos da classe
	virtual void dados();


protected:
	string nome;
	string endereco;
	string telefone;

	
};



#endif // !pessoa_h
