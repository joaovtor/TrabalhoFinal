#ifndef administrador_h
#define administrador_h

#include"empregado.h"

class ADM : public Empregado
{
public:
	//construtores
	ADM();
	ADM(string nome, string t, float sal, float imposto, float ajuda);
	
	//calculo de salario
	virtual void calcularSalario();

	//impressao de atributos
	virtual void dados();

	//setter
	void setAjudaDeCusto(float ajuda);

private:
	float ajudaDeCusto;
};



#endif // !administrador_h
