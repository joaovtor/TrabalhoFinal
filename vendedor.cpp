#include"vendedor.h"

Vendedor::Vendedor()
{
}

Vendedor::Vendedor(string nome, string telefone, float sal, float valorV, float imposto, float comissao)
{
	this->nome = nome;
	this->telefone = telefone;
	salarioBase = sal;
	valorVendas = valorV;

	this->imposto = imposto;
	this->comissao = comissao;
}

void Vendedor::calcularSalario()
{
	float salarioL;
	float imp;
	imp = imposto / 100.0;

	float com;
	com = comissao / 100.0;
	valorVendas = valorVendas * com;
											//mesma coisa do operario
	salarioBase = salarioBase + valorVendas;

	salarioL = salarioBase - (salarioBase * imp);

	cout << "O salario do empregado " << nome << " eh: " << salarioL << endl;
}

void Vendedor::setValorVenda(float valorV)
{
	valorVendas = valorV;

}

void Vendedor::setComissao(float com)
{
	comissao = com;
}