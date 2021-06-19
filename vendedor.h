#ifndef vendedor_h
#define vendedor_h

#include"empregado.h"

class Vendedor : public Empregado
{
public:
	//construtores
	Vendedor();
	Vendedor(string nome, string telefone, float sal, float valorV, float imposto, float comissao);

	//calculo de salario
	virtual void calcularSalario();

	//setters
	void setValorVenda(float valorV);
	void setComissao(float com);

private:
	float valorVendas;
	float comissao;
};



#endif // !vendedor_h
