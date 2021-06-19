#include"administrador.h"

ADM::ADM()
{
}

ADM::ADM(string nome, string t, float sal, float imposto, float ajuda)
{
	this->nome = nome;
	telefone = t;
	salarioBase = sal;
	this->imposto = imposto;
	ajudaDeCusto = ajuda;
}

void ADM::calcularSalario()
{
	float salarioL;
	float imp;
	imp = imposto / 100.0;

	salarioL = salarioBase - (salarioBase * imp);		//subtrair o valor reduzido do imposto do salario depois somar com a ajuda de custo

	salarioL = salarioL + ajudaDeCusto;

	cout << "\nO salario do adm " << nome << " eh: " << salarioL << endl;
}

void ADM::dados()
{
	cout << "\nNome: " << nome << "\ntelefone: " << telefone;
	calcularSalario();
}

void ADM::setAjudaDeCusto(float ajuda)
{
	ajudaDeCusto = ajuda;
}
