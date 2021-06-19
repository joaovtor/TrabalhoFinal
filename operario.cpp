#include"operario.h"

Operario::Operario()
{
}

Operario::Operario(string nome, string telefone, float sal, float valorP, float imposto, float comissao)
{
	this->nome = nome;
	this->telefone = telefone;
	salarioBase = sal;

	valorProducao = valorP;

	this->imposto = imposto;
	this->comissao = comissao;
}

void Operario::calcularSalario()
{
	float salarioL;
	float imp;
	imp = imposto / 100.0;
							//parada das porcentagens 
	float com;
	com = comissao / 100.0;
	valorProducao = valorProducao * com;

	salarioBase = salarioBase + valorProducao;

	salarioL = salarioBase - (salarioBase * imp);	

	cout << "O salario do empregado " << nome << " eh: " << salarioL << endl;
}

void Operario::setValorProducao(float valorp)
{
	valorProducao = valorp;

}

void Operario::setComissao(float com)
{
	comissao = com;
}
	

