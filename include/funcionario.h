#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include<string>
using namespace std;
class funcionario {
protected:
	int id;
	string nome;
	string cpf;
	short idade;
	short tipo_sanguineo;
	char fatorRH;
	string especialidade;
public:
	funcionario() :id(0), nome(""), cpf(""), idade(0), tipo_sanguineo(0), fatorRH(0), especialidade(""){}
	void set_id(int d) { id = d; }//por simplicidade na leitura do arquivo, preferi colocar o id como um atributo comum, que pode ser alterado.
	void set_nome(string n) { nome = n; }
	void set_cpf(string c) { cpf = c; }
	void set_idade(short i) { idade = i; }
	void set_tipo_sanguineo(short t) { tipo_sanguineo = t; }
	void set_fatorRH(char f) { fatorRH = f; }
	void set_especialidade(string e) { especialidade = e; }
	int get_id() { return id; }
	string get_nome() { return nome; }
	string get_cpf() { return cpf; }
	short get_idade() { return idade; }
	short get_tipo_sanguineo() { return tipo_sanguineo; }
	char get_fatorRH() { return fatorRH; }
	string get_especialidade() { return especialidade; }
};
class veterinario : public funcionario {
};
class tratador : public funcionario{
};
#endif