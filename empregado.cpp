#include "empregado.h"

Empregado::Empregado()
{
}

Empregado::Empregado(string nome, string t, float sal, float imposto)
{
	this->nome = nome;
	telefone = t;
	salarioBase = sal;
	this->imposto = imposto;
}

void Empregado::calcularSalario()
{
	float salarioL;
	float imp;

	imp = imposto / 100.0; //pra virar porcentagem

	salarioL = salarioBase - (salarioBase * imp); //subtrair o valor reduzido do imposto do salario

	cout << "O salario do empregado " << nome << " eh: " << salarioL << endl;
}

void Empregado::dados()
{
	
		cout << "\nNome: " << nome << "\nTelefone: " << telefone<<endl;
		calcularSalario();
	

}

void Empregado::setSalario(float salario)
{
	salarioBase = salario;
}

void Empregado::setImposto(float impost)
{
	imposto = impost;
}

