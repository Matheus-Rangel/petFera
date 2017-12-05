#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include "funcionario.h"
using namespace std;
class animal {
protected:
	static int current_id;
	const int id;
	string nome;
	string cientifico;
	char sexo;
	float tamanho;
	string dieta;
	veterinario vet;
	tratador trat;
	string batismo;
public:
	animal(string n, string c, char s, float t, string d, veterinario v, tratador t, string b):
			nome(n), cientifico(c), sexo(s), tamanho(t), dieta(d), vet(v), trat(t), batismo(b){}
	void set_nome(string n);
	void set_cientifico(string c);
	void set_sexo(char s);
	void set_tamanho(float t);
	void set_dieta(string d);
	void set_veterinario(v);
	void set_tratador(t);
	void set_batismo(b);
	int get_id(){return id;}
	string get_nome(){return nome;}
	string get_cientifico(){return cientifico;}
	char get_sexo(){return sexo;}
	float get_tamanho(){return tamanho;}
	string get_dieta(){return dieta;}
	veterinario get_veterinario(){return vet;}
	tratador get_tratador(){return trat;}
	string get_batismo(){return batismo;}
};
#endif