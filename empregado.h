#ifndef empregado_h
#define empregado_h

#include"pessoa.h"

class Empregado : public Pessoa
{
public:
	//construtores
	Empregado();
	Empregado(string nome, string t, float sal, float imposto);

	//funcao de calculo de salario
	virtual void calcularSalario();
	
	//impressao de atributos
	virtual void dados();

	//setters virtuais pra não precisar reescrever nas classes herdeiras
	virtual void setSalario(float salario);
	virtual void setImposto(float impost);

protected:
	int codSetor;
	float salarioBase;
	int imposto;
};




#endif // !empregado_h
