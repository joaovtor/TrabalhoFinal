#ifndef fornecedor_h
#define fornecedor_h

#include"pessoa.h"

class Fornecedor : public Pessoa
{
public:
	//construtores
	Fornecedor();
	Fornecedor(string nome, string telefone, float valorC, float valorD);

	//função do calculo de saldo
	void obterSaldo();

	//função pra imprimir dados
	virtual void dados();
	
	//setters
	void setValorCredito(float valorCred);
	void setValorDivida(float valorDiv);

private:
	float valorCredito;
	float valorDivida;
};




#endif // !fornecedor_h
