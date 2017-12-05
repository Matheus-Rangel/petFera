#include<string>
using namespace std;
class funcionario {
protected:
	static int current_id;
	const int id;
	string nome;
	string cpf;
	short idade;
	short tipo_sanguineo;
	char fatorRH;
	string especialidade;
public:
	funcionario(string n, string c, short i, short t, char f, string e): 
		id(current_id++), nome(n), cpf(c), idade(i), tipo_sanguineo(t), fatorRH(f), especialidade(e){}
	void set_nome(string n):nome(n){}
	void set_cpf(string c):cpf(c){}
	void set_idade(short i):idade(i){}
	void set_tipo_sanguineo(short t):tipo_sanguineo(t){}
	void set_fatorRH(char f):fatorRH(f){}
	void set_especialidade(string e):especialidade(e){}
	int get_id();
	string get_nome(){ return nome;}
	string get_cpf(){return cpf;}
	short get_idade(){return idade;}
	short get_tipo_sanguineo(){return tipo_sanguineo;}
	char get_fatorRH(){return fatorRH;}
	string get_especialidade(){return especialidade;}
};