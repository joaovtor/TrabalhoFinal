#ifndef operario_h
#define operario_h

#include"empregado.h"

class Operario : public Empregado
{
public:
	//construtores
	Operario();
	Operario(string nome, string telefone, float sal, float valorP, float imposto, float comissao);

	//calculo de salario
	virtual void calcularSalario();

	//setters
	void setValorProducao(float valorp);
	void setComissao(float com);

private:
	float valorProducao;
	float comissao;
};



#endif // !operario_h
